/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_End
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *End)
    {
        if (End->objectName().isEmpty())
            End->setObjectName(QString::fromUtf8("End"));
        End->resize(529, 555);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(End->sizePolicy().hasHeightForWidth());
        End->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(End);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(End);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(End);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 4);

        retranslateUi(End);

        QMetaObject::connectSlotsByName(End);
    } // setupUi

    void retranslateUi(QDialog *End)
    {
        End->setWindowTitle(QCoreApplication::translate("End", "Ludo", nullptr));
        label->setText(QCoreApplication::translate("End", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("End", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class End: public Ui_End {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H
