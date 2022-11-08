/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindowClass
{
public:
    QLineEdit *line_1;
    QLineEdit *line_2;
    QPushButton *btn_sna;
    QPushButton *btn_history;
    QPushButton *btn_menu;
    QLabel *title;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_per;
    QPushButton *btn_ce;
    QPushButton *btn_c;
    QPushButton *btn_del;
    QPushButton *btn_fra;
    QPushButton *btn_sqr;
    QPushButton *btn_ext;
    QPushButton *btn_div;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mult;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;
    QPushButton *btn_adr;
    QPushButton *btn_0;
    QPushButton *btn_p;
    QPushButton *btn_sq;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_MC;
    QPushButton *btn_MR;
    QPushButton *btn_M_add;
    QPushButton *btn_M_sub;
    QPushButton *btn_MS;
    QPushButton *btn_M;
    QPushButton *btn_skin;
    QPushButton *btn_about;

    void setupUi(QWidget *mainWindowClass)
    {
        if (mainWindowClass->objectName().isEmpty())
            mainWindowClass->setObjectName(QString::fromUtf8("mainWindowClass"));
        mainWindowClass->resize(329, 529);
        mainWindowClass->setMinimumSize(QSize(329, 529));
        mainWindowClass->setMaximumSize(QSize(329, 529));
        mainWindowClass->setStyleSheet(QString::fromUtf8(""));
        line_1 = new QLineEdit(mainWindowClass);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setEnabled(false);
        line_1->setGeometry(QRect(0, 50, 315, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        line_1->setFont(font);
        line_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_2 = new QLineEdit(mainWindowClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(6, 83, 315, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setWeight(75);
        line_2->setFont(font1);
        line_2->setMouseTracking(false);
        line_2->setMaxLength(16);
        line_2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        line_2->setDragEnabled(true);
        btn_sna = new QPushButton(mainWindowClass);
        btn_sna->setObjectName(QString::fromUtf8("btn_sna"));
        btn_sna->setGeometry(QRect(100, 12, 31, 31));
        btn_history = new QPushButton(mainWindowClass);
        btn_history->setObjectName(QString::fromUtf8("btn_history"));
        btn_history->setGeometry(QRect(290, 10, 33, 33));
        btn_menu = new QPushButton(mainWindowClass);
        btn_menu->setObjectName(QString::fromUtf8("btn_menu"));
        btn_menu->setGeometry(QRect(3, 8, 39, 36));
        title = new QLabel(mainWindowClass);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(48, 5, 41, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(15);
        title->setFont(font2);
        layoutWidget = new QWidget(mainWindowClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 190, 332, 341));
        layoutWidget->setMinimumSize(QSize(64, 0));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_per = new QPushButton(layoutWidget);
        btn_per->setObjectName(QString::fromUtf8("btn_per"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_per->sizePolicy().hasHeightForWidth());
        btn_per->setSizePolicy(sizePolicy);
        btn_per->setMinimumSize(QSize(80, 54));
        btn_per->setMaximumSize(QSize(76, 52));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font3.setPointSize(13);
        btn_per->setFont(font3);

        gridLayout->addWidget(btn_per, 0, 0, 1, 1);

        btn_ce = new QPushButton(layoutWidget);
        btn_ce->setObjectName(QString::fromUtf8("btn_ce"));
        sizePolicy.setHeightForWidth(btn_ce->sizePolicy().hasHeightForWidth());
        btn_ce->setSizePolicy(sizePolicy);
        btn_ce->setMinimumSize(QSize(80, 54));
        btn_ce->setMaximumSize(QSize(76, 52));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font4.setPointSize(10);
        btn_ce->setFont(font4);

        gridLayout->addWidget(btn_ce, 0, 1, 1, 1);

        btn_c = new QPushButton(layoutWidget);
        btn_c->setObjectName(QString::fromUtf8("btn_c"));
        sizePolicy.setHeightForWidth(btn_c->sizePolicy().hasHeightForWidth());
        btn_c->setSizePolicy(sizePolicy);
        btn_c->setMinimumSize(QSize(80, 54));
        btn_c->setMaximumSize(QSize(76, 52));
        btn_c->setFont(font4);

        gridLayout->addWidget(btn_c, 0, 2, 1, 1);

        btn_del = new QPushButton(layoutWidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        sizePolicy.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy);
        btn_del->setMinimumSize(QSize(80, 54));
        btn_del->setMaximumSize(QSize(76, 52));
        btn_del->setFont(font4);

        gridLayout->addWidget(btn_del, 0, 3, 1, 1);

        btn_fra = new QPushButton(layoutWidget);
        btn_fra->setObjectName(QString::fromUtf8("btn_fra"));
        sizePolicy.setHeightForWidth(btn_fra->sizePolicy().hasHeightForWidth());
        btn_fra->setSizePolicy(sizePolicy);
        btn_fra->setMinimumSize(QSize(80, 54));
        btn_fra->setMaximumSize(QSize(76, 52));
        btn_fra->setFont(font4);

        gridLayout->addWidget(btn_fra, 1, 0, 1, 1);

        btn_sqr = new QPushButton(layoutWidget);
        btn_sqr->setObjectName(QString::fromUtf8("btn_sqr"));
        sizePolicy.setHeightForWidth(btn_sqr->sizePolicy().hasHeightForWidth());
        btn_sqr->setSizePolicy(sizePolicy);
        btn_sqr->setMinimumSize(QSize(80, 54));
        btn_sqr->setMaximumSize(QSize(76, 52));
        btn_sqr->setFont(font4);

        gridLayout->addWidget(btn_sqr, 1, 1, 1, 1);

        btn_ext = new QPushButton(layoutWidget);
        btn_ext->setObjectName(QString::fromUtf8("btn_ext"));
        sizePolicy.setHeightForWidth(btn_ext->sizePolicy().hasHeightForWidth());
        btn_ext->setSizePolicy(sizePolicy);
        btn_ext->setMinimumSize(QSize(80, 54));
        btn_ext->setMaximumSize(QSize(76, 52));
        btn_ext->setFont(font4);

        gridLayout->addWidget(btn_ext, 1, 2, 1, 1);

        btn_div = new QPushButton(layoutWidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);
        btn_div->setMinimumSize(QSize(80, 54));
        btn_div->setMaximumSize(QSize(76, 52));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        btn_div->setFont(font5);

        gridLayout->addWidget(btn_div, 1, 3, 1, 1);

        btn_7 = new QPushButton(layoutWidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setMinimumSize(QSize(80, 54));
        btn_7->setMaximumSize(QSize(76, 52));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font6.setPointSize(13);
        btn_7->setFont(font6);

        gridLayout->addWidget(btn_7, 2, 0, 1, 1);

        btn_8 = new QPushButton(layoutWidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setMinimumSize(QSize(80, 54));
        btn_8->setMaximumSize(QSize(76, 52));
        btn_8->setFont(font6);

        gridLayout->addWidget(btn_8, 2, 1, 1, 1);

        btn_9 = new QPushButton(layoutWidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setMinimumSize(QSize(80, 54));
        btn_9->setMaximumSize(QSize(76, 52));
        btn_9->setFont(font6);

        gridLayout->addWidget(btn_9, 2, 2, 1, 1);

        btn_mult = new QPushButton(layoutWidget);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        sizePolicy.setHeightForWidth(btn_mult->sizePolicy().hasHeightForWidth());
        btn_mult->setSizePolicy(sizePolicy);
        btn_mult->setMinimumSize(QSize(80, 54));
        btn_mult->setMaximumSize(QSize(76, 52));
        btn_mult->setFont(font5);

        gridLayout->addWidget(btn_mult, 2, 3, 1, 1);

        btn_4 = new QPushButton(layoutWidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setMinimumSize(QSize(80, 54));
        btn_4->setMaximumSize(QSize(76, 52));
        btn_4->setFont(font6);

        gridLayout->addWidget(btn_4, 3, 0, 1, 1);

        btn_5 = new QPushButton(layoutWidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setMinimumSize(QSize(80, 54));
        btn_5->setMaximumSize(QSize(76, 52));
        btn_5->setFont(font6);

        gridLayout->addWidget(btn_5, 3, 1, 1, 1);

        btn_6 = new QPushButton(layoutWidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setMinimumSize(QSize(80, 54));
        btn_6->setMaximumSize(QSize(76, 52));
        btn_6->setFont(font6);

        gridLayout->addWidget(btn_6, 3, 2, 1, 1);

        btn_sub = new QPushButton(layoutWidget);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);
        btn_sub->setMinimumSize(QSize(80, 54));
        btn_sub->setMaximumSize(QSize(76, 52));
        btn_sub->setFont(font5);

        gridLayout->addWidget(btn_sub, 3, 3, 1, 1);

        btn_1 = new QPushButton(layoutWidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setMinimumSize(QSize(80, 54));
        btn_1->setMaximumSize(QSize(76, 52));
        btn_1->setFont(font6);

        gridLayout->addWidget(btn_1, 4, 0, 1, 1);

        btn_2 = new QPushButton(layoutWidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setMinimumSize(QSize(80, 54));
        btn_2->setMaximumSize(QSize(76, 52));
        btn_2->setFont(font6);

        gridLayout->addWidget(btn_2, 4, 1, 1, 1);

        btn_3 = new QPushButton(layoutWidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setMinimumSize(QSize(80, 54));
        btn_3->setMaximumSize(QSize(76, 52));
        btn_3->setFont(font6);

        gridLayout->addWidget(btn_3, 4, 2, 1, 1);

        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setMinimumSize(QSize(80, 54));
        btn_add->setMaximumSize(QSize(76, 52));
        btn_add->setFont(font5);

        gridLayout->addWidget(btn_add, 4, 3, 1, 1);

        btn_adr = new QPushButton(layoutWidget);
        btn_adr->setObjectName(QString::fromUtf8("btn_adr"));
        sizePolicy.setHeightForWidth(btn_adr->sizePolicy().hasHeightForWidth());
        btn_adr->setSizePolicy(sizePolicy);
        btn_adr->setMinimumSize(QSize(80, 54));
        btn_adr->setMaximumSize(QSize(76, 52));
        btn_adr->setFont(font6);

        gridLayout->addWidget(btn_adr, 5, 0, 1, 1);

        btn_0 = new QPushButton(layoutWidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setMinimumSize(QSize(80, 54));
        btn_0->setMaximumSize(QSize(76, 52));
        btn_0->setFont(font6);

        gridLayout->addWidget(btn_0, 5, 1, 1, 1);

        btn_p = new QPushButton(layoutWidget);
        btn_p->setObjectName(QString::fromUtf8("btn_p"));
        sizePolicy.setHeightForWidth(btn_p->sizePolicy().hasHeightForWidth());
        btn_p->setSizePolicy(sizePolicy);
        btn_p->setMinimumSize(QSize(80, 54));
        btn_p->setMaximumSize(QSize(76, 52));
        btn_p->setFont(font6);

        gridLayout->addWidget(btn_p, 5, 2, 1, 1);

        btn_sq = new QPushButton(layoutWidget);
        btn_sq->setObjectName(QString::fromUtf8("btn_sq"));
        sizePolicy.setHeightForWidth(btn_sq->sizePolicy().hasHeightForWidth());
        btn_sq->setSizePolicy(sizePolicy);
        btn_sq->setMinimumSize(QSize(80, 54));
        btn_sq->setMaximumSize(QSize(76, 52));
        btn_sq->setFont(font5);

        gridLayout->addWidget(btn_sq, 5, 3, 1, 1);

        layoutWidget1 = new QWidget(mainWindowClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 160, 331, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_MC = new QPushButton(layoutWidget1);
        btn_MC->setObjectName(QString::fromUtf8("btn_MC"));
        sizePolicy.setHeightForWidth(btn_MC->sizePolicy().hasHeightForWidth());
        btn_MC->setSizePolicy(sizePolicy);
        btn_MC->setMaximumSize(QSize(49, 36));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font7.setBold(true);
        font7.setWeight(75);
        btn_MC->setFont(font7);

        horizontalLayout->addWidget(btn_MC);

        btn_MR = new QPushButton(layoutWidget1);
        btn_MR->setObjectName(QString::fromUtf8("btn_MR"));
        sizePolicy.setHeightForWidth(btn_MR->sizePolicy().hasHeightForWidth());
        btn_MR->setSizePolicy(sizePolicy);
        btn_MR->setMaximumSize(QSize(49, 36));
        btn_MR->setFont(font7);

        horizontalLayout->addWidget(btn_MR);

        btn_M_add = new QPushButton(layoutWidget1);
        btn_M_add->setObjectName(QString::fromUtf8("btn_M_add"));
        sizePolicy.setHeightForWidth(btn_M_add->sizePolicy().hasHeightForWidth());
        btn_M_add->setSizePolicy(sizePolicy);
        btn_M_add->setMaximumSize(QSize(49, 36));
        btn_M_add->setFont(font7);

        horizontalLayout->addWidget(btn_M_add);

        btn_M_sub = new QPushButton(layoutWidget1);
        btn_M_sub->setObjectName(QString::fromUtf8("btn_M_sub"));
        sizePolicy.setHeightForWidth(btn_M_sub->sizePolicy().hasHeightForWidth());
        btn_M_sub->setSizePolicy(sizePolicy);
        btn_M_sub->setMaximumSize(QSize(49, 36));
        btn_M_sub->setFont(font7);

        horizontalLayout->addWidget(btn_M_sub);

        btn_MS = new QPushButton(layoutWidget1);
        btn_MS->setObjectName(QString::fromUtf8("btn_MS"));
        sizePolicy.setHeightForWidth(btn_MS->sizePolicy().hasHeightForWidth());
        btn_MS->setSizePolicy(sizePolicy);
        btn_MS->setMaximumSize(QSize(49, 36));
        btn_MS->setFont(font7);

        horizontalLayout->addWidget(btn_MS);

        btn_M = new QPushButton(layoutWidget1);
        btn_M->setObjectName(QString::fromUtf8("btn_M"));
        sizePolicy.setHeightForWidth(btn_M->sizePolicy().hasHeightForWidth());
        btn_M->setSizePolicy(sizePolicy);
        btn_M->setMaximumSize(QSize(49, 36));
        btn_M->setFont(font7);

        horizontalLayout->addWidget(btn_M);

        btn_skin = new QPushButton(mainWindowClass);
        btn_skin->setObjectName(QString::fromUtf8("btn_skin"));
        btn_skin->setGeometry(QRect(150, 10, 41, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font8.setPointSize(10);
        btn_skin->setFont(font8);
        btn_about = new QPushButton(mainWindowClass);
        btn_about->setObjectName(QString::fromUtf8("btn_about"));
        btn_about->setGeometry(QRect(220, 10, 41, 31));
        btn_about->setFont(font8);

        retranslateUi(mainWindowClass);

        QMetaObject::connectSlotsByName(mainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *mainWindowClass)
    {
        mainWindowClass->setWindowTitle(QCoreApplication::translate("mainWindowClass", "mainWindow", nullptr));
        btn_sna->setText(QString());
        btn_history->setText(QString());
        btn_menu->setText(QString());
        title->setText(QCoreApplication::translate("mainWindowClass", "\346\240\207\345\207\206", nullptr));
        btn_per->setText(QCoreApplication::translate("mainWindowClass", "%", nullptr));
        btn_ce->setText(QCoreApplication::translate("mainWindowClass", "CE", nullptr));
        btn_c->setText(QCoreApplication::translate("mainWindowClass", "C", nullptr));
        btn_del->setText(QCoreApplication::translate("mainWindowClass", "Del", nullptr));
        btn_fra->setText(QCoreApplication::translate("mainWindowClass", "l/x", nullptr));
        btn_sqr->setText(QCoreApplication::translate("mainWindowClass", "x2", nullptr));
        btn_ext->setText(QCoreApplication::translate("mainWindowClass", "\342\210\232x", nullptr));
        btn_div->setText(QCoreApplication::translate("mainWindowClass", "\303\267", nullptr));
        btn_7->setText(QCoreApplication::translate("mainWindowClass", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("mainWindowClass", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("mainWindowClass", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("mainWindowClass", "\303\227", nullptr));
        btn_4->setText(QCoreApplication::translate("mainWindowClass", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("mainWindowClass", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("mainWindowClass", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("mainWindowClass", "-", nullptr));
        btn_1->setText(QCoreApplication::translate("mainWindowClass", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("mainWindowClass", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("mainWindowClass", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("mainWindowClass", "+", nullptr));
        btn_adr->setText(QCoreApplication::translate("mainWindowClass", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("mainWindowClass", "0", nullptr));
        btn_p->setText(QCoreApplication::translate("mainWindowClass", ".", nullptr));
        btn_sq->setText(QCoreApplication::translate("mainWindowClass", "=", nullptr));
        btn_MC->setText(QCoreApplication::translate("mainWindowClass", "MC", nullptr));
        btn_MR->setText(QCoreApplication::translate("mainWindowClass", "MR", nullptr));
        btn_M_add->setText(QCoreApplication::translate("mainWindowClass", "M+", nullptr));
        btn_M_sub->setText(QCoreApplication::translate("mainWindowClass", "M-", nullptr));
        btn_MS->setText(QCoreApplication::translate("mainWindowClass", "MS", nullptr));
        btn_M->setText(QCoreApplication::translate("mainWindowClass", "M", nullptr));
        btn_skin->setText(QCoreApplication::translate("mainWindowClass", "\346\232\227\350\211\262", nullptr));
        btn_about->setText(QCoreApplication::translate("mainWindowClass", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindowClass: public Ui_mainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
