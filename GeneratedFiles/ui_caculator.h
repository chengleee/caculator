/********************************************************************************
** Form generated from reading UI file 'caculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACULATOR_H
#define UI_CACULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_caculatorClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lab_display;
    QGridLayout *gridLayout;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_9;
    QPushButton *btn_0;
    QPushButton *btn_6;
    QPushButton *btn_equ;
    QPushButton *btn_div;
    QPushButton *btn_add;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_8;
    QPushButton *btn_sub;
    QPushButton *btn_1;
    QPushButton *btn_7;
    QPushButton *btn_mul;
    QPushButton *btn_clear;

    void setupUi(QDialog *caculatorClass)
    {
        if (caculatorClass->objectName().isEmpty())
            caculatorClass->setObjectName(QStringLiteral("caculatorClass"));
        caculatorClass->resize(417, 479);
        caculatorClass->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(caculatorClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        lab_display = new QLabel(caculatorClass);
        lab_display->setObjectName(QStringLiteral("lab_display"));
        lab_display->setStyleSheet(QString::fromUtf8("font: 48pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(141, 141, 141);"));
        lab_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lab_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_2 = new QPushButton(caculatorClass);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        btn_3 = new QPushButton(caculatorClass);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        btn_9 = new QPushButton(caculatorClass);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_9, 0, 2, 1, 1);

        btn_0 = new QPushButton(caculatorClass);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_6 = new QPushButton(caculatorClass);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_equ = new QPushButton(caculatorClass);
        btn_equ->setObjectName(QStringLiteral("btn_equ"));
        sizePolicy.setHeightForWidth(btn_equ->sizePolicy().hasHeightForWidth());
        btn_equ->setSizePolicy(sizePolicy);
        btn_equ->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_equ, 3, 2, 1, 1);

        btn_div = new QPushButton(caculatorClass);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);
        btn_div->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_div, 3, 3, 1, 1);

        btn_add = new QPushButton(caculatorClass);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_add, 0, 3, 1, 1);

        btn_4 = new QPushButton(caculatorClass);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_5 = new QPushButton(caculatorClass);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_8 = new QPushButton(caculatorClass);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_8, 0, 1, 1, 1);

        btn_sub = new QPushButton(caculatorClass);
        btn_sub->setObjectName(QStringLiteral("btn_sub"));
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);
        btn_sub->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_sub, 1, 3, 1, 1);

        btn_1 = new QPushButton(caculatorClass);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        btn_7 = new QPushButton(caculatorClass);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_7, 0, 0, 1, 1);

        btn_mul = new QPushButton(caculatorClass);
        btn_mul->setObjectName(QStringLiteral("btn_mul"));
        sizePolicy.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy);
        btn_mul->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_mul, 2, 3, 1, 1);

        btn_clear = new QPushButton(caculatorClass);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        btn_clear->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));

        gridLayout->addWidget(btn_clear, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(caculatorClass);

        QMetaObject::connectSlotsByName(caculatorClass);
    } // setupUi

    void retranslateUi(QDialog *caculatorClass)
    {
        caculatorClass->setWindowTitle(QApplication::translate("caculatorClass", "caculator", nullptr));
        lab_display->setText(QApplication::translate("caculatorClass", "0", nullptr));
        btn_2->setText(QApplication::translate("caculatorClass", "2", nullptr));
        btn_3->setText(QApplication::translate("caculatorClass", "3", nullptr));
        btn_9->setText(QApplication::translate("caculatorClass", "9", nullptr));
        btn_0->setText(QApplication::translate("caculatorClass", "0", nullptr));
        btn_6->setText(QApplication::translate("caculatorClass", "6", nullptr));
        btn_equ->setText(QApplication::translate("caculatorClass", "=", nullptr));
        btn_div->setText(QApplication::translate("caculatorClass", "/", nullptr));
        btn_add->setText(QApplication::translate("caculatorClass", "+", nullptr));
        btn_4->setText(QApplication::translate("caculatorClass", "4", nullptr));
        btn_5->setText(QApplication::translate("caculatorClass", "5", nullptr));
        btn_8->setText(QApplication::translate("caculatorClass", "8", nullptr));
        btn_sub->setText(QApplication::translate("caculatorClass", "-", nullptr));
        btn_1->setText(QApplication::translate("caculatorClass", "1", nullptr));
        btn_7->setText(QApplication::translate("caculatorClass", "7", nullptr));
        btn_mul->setText(QApplication::translate("caculatorClass", "*", nullptr));
        btn_clear->setText(QApplication::translate("caculatorClass", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class caculatorClass: public Ui_caculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACULATOR_H
