#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QtSql>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setFixedSize(500,400);
    setWindowTitle(tr("登录MyQQ"));
    ui->pwdLineEdit->setFocus();
    ui->loginBtn->setDefault(true);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->pwdLineEdit->text().isEmpty()){
        QMessageBox::information(this,tr("please enter password"),tr("please enter mima,and login again"),QMessageBox::Ok);
        ui->pwdLineEdit->setFocus();
    }else{
        QSqlQuery query;
        query.exec("select pwd from password");
        query.next();
        if(query.value(0).toString() == ui->pwdLineEdit->text()){
            QDialog::accept();
        }else{
            QMessageBox::warning(this,tr("password error"),tr("please enter ther right password,and login again"),QMessageBox::Ok);
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();
        }
    }
}

void LoginDialog::on_quitBtn_clicked()
{
    QDialog::reject();
}
