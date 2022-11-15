/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginBtn;
    QPushButton *quitBtn;
    QLineEdit *pwdLineEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 300);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 201, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 54, 12));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(100, 220, 75, 23));
        quitBtn = new QPushButton(LoginDialog);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setGeometry(QRect(230, 220, 75, 23));
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(110, 120, 201, 20));
        pwdLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        //label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250\346\261\275\350\275\246\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
		label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250\346\261", nullptr));
		label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        quitBtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
