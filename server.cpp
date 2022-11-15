#include "server.h"
#include "ui_server.h"

#include <QFile>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

Server::Server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    setFixedSize(400,207);

    tPort = 5555;
    tSrv = new QTcpServer(this);
    connect(tSrv, SIGNAL(newConnection()), this, SLOT(sndMsg()));

    initSrv();
}

Server::~Server()
{
    delete ui;
}

void Server::initSrv()
{
    payloadSize = 64*1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesTobeWrite = 0;

    ui->sStatusLbl->setText(tr("请选择要传送的文件"));
    ui->progressBar->reset();
    ui->sOpenBtn->setEnabled(true);
    ui->sSendBtn->setEnabled(false);

    tSrv->close();
}

void Server::sndMsg()
{
    ui->sSendBtn->setEnabled(false);
    clntConn = tSrv->nextPendingConnection();
    connect(clntConn,SIGNAL(bytesWritten(qint64)),this,SLOT(updClntProgress(qint64)));

    ui->sStatusLbl->setText(tr("start to transmit file %1").arg(theFileName));

    locFile = new QFile(fileName);
    if(!locFile->open((QFile::ReadOnly))){
        QMessageBox::warning(this, tr("application"), tr("can't read file %1:\n%2").arg(fileName).arg(locFile->errorString()));
        return;
    }
    totalBytes = locFile->size();
    QDataStream sendOut(&outBlock, QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_7);
    time.start();  // 开始计时
    QString curFile = fileName.right(fileName.size() - fileName.lastIndexOf('/')-1);
    sendOut << qint64(0) << qint64(0) << curFile;
    totalBytes += outBlock.size();
    sendOut.device()->seek(0);
    sendOut << totalBytes << qint64((outBlock.size() - sizeof(qint64)*2));
    bytesTobeWrite = totalBytes - clntConn->write(outBlock);
    outBlock.resize(0);
}

void Server::updClntProgress(qint64 numBytes)
{
    qApp->processEvents();
    bytesWritten += (int)numBytes;
    if (bytesTobeWrite > 0) {
        outBlock = locFile->read(qMin(bytesTobeWrite, payloadSize));
        bytesTobeWrite -= (int)clntConn->write(outBlock);
        outBlock.resize(0);
    } else {
        locFile->close();
    }
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesWritten);

    float useTime = time.elapsed();
    double speed = bytesWritten / useTime;
    ui->sStatusLbl->setText(tr("received %1MB (%2MB/s) \ntotal%3MB timeout：%4s\n estmate reserived time：%5s")
                   .arg(bytesWritten / (1024*1024))
                   .arg(speed*1000 / (1024*1024), 0, 'f', 2)
                   .arg(totalBytes / (1024 * 1024))
                   .arg(useTime/1000, 0, 'f', 0)
                   .arg(totalBytes/speed/1000 - useTime/1000, 0, 'f', 0));

    if(bytesWritten == totalBytes) {
        locFile->close();
        tSrv->close();
        ui->sStatusLbl->setText(tr("transmit file %1 success").arg(theFileName));
    }
}
void Server::on_sOpenBtn_clicked()
{
    fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        theFileName = fileName.right(fileName.size() - fileName.lastIndexOf('/')-1);
        ui->sStatusLbl->setText(tr("To transmit file：%1 ").arg(theFileName));
        ui->sSendBtn->setEnabled(true);
        ui->sOpenBtn->setEnabled(false);
    }
}

void Server::on_sSendBtn_clicked()
{
    if(!tSrv->listen(QHostAddress::Any,tPort))//start liscen
    {
        qDebug() << tSrv->errorString();
        close();
        return;
    }

    ui->sStatusLbl->setText(tr("等待对方接收... ..."));
    emit sndFileName(theFileName);
}

void Server::on_sCloseBtn_clicked()
{
    if(tSrv->isListening())
    {
        tSrv->close();
        if (locFile->isOpen())
            locFile->close();
        clntConn->abort();
    }
    close();
}

void Server::refused()
{
    tSrv->close();
    ui->sStatusLbl->setText(tr("the other reject received"));
}

void Server::closeEvent(QCloseEvent *)
{
    on_sCloseBtn_clicked();
}
