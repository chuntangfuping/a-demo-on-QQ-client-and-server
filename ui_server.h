/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QLabel *sStatusLbl;
    QProgressBar *progressBar;
    QPushButton *sOpenBtn;
    QPushButton *sSendBtn;
    QPushButton *sCloseBtn;
    QLabel *label_2;

    void setupUi(QDialog *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(400, 207);
        sStatusLbl = new QLabel(Server);
        sStatusLbl->setObjectName(QString::fromUtf8("sStatusLbl"));
        sStatusLbl->setGeometry(QRect(40, 110, 331, 51));
        QFont font;
        font.setPointSize(10);
        sStatusLbl->setFont(font);
        progressBar = new QProgressBar(Server);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(120, 80, 261, 23));
        progressBar->setValue(0);
        sOpenBtn = new QPushButton(Server);
        sOpenBtn->setObjectName(QString::fromUtf8("sOpenBtn"));
        sOpenBtn->setGeometry(QRect(180, 30, 75, 23));
        sSendBtn = new QPushButton(Server);
        sSendBtn->setObjectName(QString::fromUtf8("sSendBtn"));
        sSendBtn->setGeometry(QRect(40, 80, 75, 23));
        sCloseBtn = new QPushButton(Server);
        sCloseBtn->setObjectName(QString::fromUtf8("sCloseBtn"));
        sCloseBtn->setGeometry(QRect(300, 170, 75, 23));
        label_2 = new QLabel(Server);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 131, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QDialog *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "\345\217\221\351\200\201", nullptr));
        sStatusLbl->setText(QApplication::translate("Server", "\350\257\267\351\200\211\346\213\251\350\246\201\345\217\221\351\200\201\347\232\204\346\226\207\344\273\266\357\274\201", nullptr));
        sOpenBtn->setText(QApplication::translate("Server", "\346\211\223\345\274\200...", nullptr));
        sSendBtn->setText(QApplication::translate("Server", "\345\217\221\351\200\201", nullptr));
        sCloseBtn->setText(QApplication::translate("Server", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QApplication::translate("Server", "\351\200\211\346\213\251\346\226\207\344\273\266/\346\226\207\344\273\266\345\244\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
