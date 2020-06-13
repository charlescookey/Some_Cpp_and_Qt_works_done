/********************************************************************************
** Form generated from reading UI file 'choice.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICE_H
#define UI_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Choice
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Choice)
    {
        if (Choice->objectName().isEmpty())
            Choice->setObjectName(QString::fromUtf8("Choice"));
        Choice->resize(297, 102);
        verticalLayout_2 = new QVBoxLayout(Choice);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Choice);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Choice);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(Choice);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Choice);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Choice);

        QMetaObject::connectSlotsByName(Choice);
    } // setupUi

    void retranslateUi(QDialog *Choice)
    {
        Choice->setWindowTitle(QCoreApplication::translate("Choice", "Choice", nullptr));
        label->setText(QCoreApplication::translate("Choice", "Player 1", nullptr));
        label_2->setText(QCoreApplication::translate("Choice", "It's your turn, Would you like to roll or pass?", nullptr));
        pushButton->setText(QCoreApplication::translate("Choice", "ROLL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Choice", "PASS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choice: public Ui_Choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICE_H
