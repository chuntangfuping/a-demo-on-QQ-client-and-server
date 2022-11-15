/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *sendTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QTextEdit *msgTxtEdit;
    QTableWidget *usrTblWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *usrNumLbl;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(730, 450);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        msgBrowser = new QTextBrowser(Widget);
        msgBrowser->setObjectName(QString::fromUtf8("msgBrowser"));

        verticalLayout->addWidget(msgBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fontCbx = new QFontComboBox(Widget);
        fontCbx->setObjectName(QString::fromUtf8("fontCbx"));

        horizontalLayout->addWidget(fontCbx);

        sizeCbx = new QComboBox(Widget);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName(QString::fromUtf8("sizeCbx"));

        horizontalLayout->addWidget(sizeCbx);

        boldTBtn = new QToolButton(Widget);
        boldTBtn->setObjectName(QString::fromUtf8("boldTBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(26, 26));
        boldTBtn->setCheckable(true);
        boldTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(boldTBtn);

        italicTBtn = new QToolButton(Widget);
        italicTBtn->setObjectName(QString::fromUtf8("italicTBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(26, 26));
        italicTBtn->setCheckable(true);
        italicTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(italicTBtn);

        underlineTBtn = new QToolButton(Widget);
        underlineTBtn->setObjectName(QString::fromUtf8("underlineTBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setIconSize(QSize(26, 26));
        underlineTBtn->setCheckable(true);
        underlineTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(underlineTBtn);

        colorTBtn = new QToolButton(Widget);
        colorTBtn->setObjectName(QString::fromUtf8("colorTBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);
        colorTBtn->setIconSize(QSize(26, 26));
        colorTBtn->setCheckable(false);
        colorTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(colorTBtn);

        sendTBtn = new QToolButton(Widget);
        sendTBtn->setObjectName(QString::fromUtf8("sendTBtn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendTBtn->setIcon(icon4);
        sendTBtn->setIconSize(QSize(26, 26));
        sendTBtn->setCheckable(false);
        sendTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(sendTBtn);

        saveTBtn = new QToolButton(Widget);
        saveTBtn->setObjectName(QString::fromUtf8("saveTBtn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon5);
        saveTBtn->setIconSize(QSize(26, 26));
        saveTBtn->setCheckable(false);
        saveTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(saveTBtn);

        clearTBtn = new QToolButton(Widget);
        clearTBtn->setObjectName(QString::fromUtf8("clearTBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon6);
        clearTBtn->setIconSize(QSize(26, 26));
        clearTBtn->setCheckable(false);
        clearTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(clearTBtn);


        verticalLayout->addLayout(horizontalLayout);

        msgTxtEdit = new QTextEdit(Widget);
        msgTxtEdit->setObjectName(QString::fromUtf8("msgTxtEdit"));

        verticalLayout->addWidget(msgTxtEdit);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout);

        usrTblWidget = new QTableWidget(Widget);
        if (usrTblWidget->columnCount() < 2)
            usrTblWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        usrTblWidget->setObjectName(QString::fromUtf8("usrTblWidget"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        usrTblWidget->setShowGrid(false);

        horizontalLayout_2->addWidget(usrTblWidget);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendBtn = new QPushButton(Widget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout_3->addWidget(sendBtn);

        horizontalSpacer_2 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        usrNumLbl = new QLabel(Widget);
        usrNumLbl->setObjectName(QString::fromUtf8("usrNumLbl"));

        horizontalLayout_3->addWidget(usrNumLbl);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));

        horizontalLayout_3->addWidget(exitBtn);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 5);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 2);
        horizontalLayout_3->setStretch(5, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        sizeCbx->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        sizeCbx->setItemText(1, QApplication::translate("Widget", "9", nullptr));
        sizeCbx->setItemText(2, QApplication::translate("Widget", "10", nullptr));
        sizeCbx->setItemText(3, QApplication::translate("Widget", "11", nullptr));
        sizeCbx->setItemText(4, QApplication::translate("Widget", "12", nullptr));
        sizeCbx->setItemText(5, QApplication::translate("Widget", "13", nullptr));
        sizeCbx->setItemText(6, QApplication::translate("Widget", "14", nullptr));
        sizeCbx->setItemText(7, QApplication::translate("Widget", "15", nullptr));
        sizeCbx->setItemText(8, QApplication::translate("Widget", "16", nullptr));
        sizeCbx->setItemText(9, QApplication::translate("Widget", "17", nullptr));
        sizeCbx->setItemText(10, QApplication::translate("Widget", "18", nullptr));
        sizeCbx->setItemText(11, QApplication::translate("Widget", "19", nullptr));
        sizeCbx->setItemText(12, QApplication::translate("Widget", "20", nullptr));
        sizeCbx->setItemText(13, QApplication::translate("Widget", "21", nullptr));
        sizeCbx->setItemText(14, QApplication::translate("Widget", "22", nullptr));

#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
        boldTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_NO_TOOLTIP
        italicTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        underlineTBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        underlineTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorTBtn->setToolTip(QApplication::translate("Widget", "\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        colorTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        sendTBtn->setToolTip(QApplication::translate("Widget", "\344\274\240\350\276\223\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        sendTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveTBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        saveTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        clearTBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        clearTBtn->setText(QApplication::translate("Widget", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = usrTblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", nullptr));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        usrNumLbl->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        Q_UNUSED(Widget);
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
