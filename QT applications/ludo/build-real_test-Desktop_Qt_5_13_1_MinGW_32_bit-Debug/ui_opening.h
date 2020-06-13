/********************************************************************************
** Form generated from reading UI file 'opening.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENING_H
#define UI_OPENING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Opening
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *Opening)
    {
        if (Opening->objectName().isEmpty())
            Opening->setObjectName(QString::fromUtf8("Opening"));
        Opening->resize(800, 600);
        Opening->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"font: 87 45pt \"Arial Black\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgb(255,0,0);\n"
"}\n"
"QPushButton#pushButton:hover{\n"
"background-color: rgb(180,0,0);\n"
"}\n"
"QPushButton#pushButton:pressed{\n"
"background-color: rgb(100,0,0);\n"
"}\n"
"\n"
"QPushButton#pushButton_2{\n"
"font: 87 45pt \"Arial Black\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgb(0,255,0);\n"
"}\n"
"QPushButton#pushButton_2:hover{\n"
"background-color: rgb(0,180,0);\n"
"}\n"
"QPushButton#pushButton_2:pressed{\n"
"background-color: rgb(0,100,0);\n"
"}\n"
"\n"
"QPushButton#pushButton_3{\n"
"font: 87 45pt \"Arial Black\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgb(0,0,255);\n"
"}\n"
"QPushButton#pushButton_3:hover{\n"
"background-color: rgb(0,0,180);\n"
"}\n"
"QPushButton#pushButton_3:pressed{\n"
"background-color: rgb(0,0,100);\n"
"}\n"
"\n"
"QPushButton#pushButton_4{\n"
"font: 87 45pt \"Arial Black\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgb(255,255,0);\n"
"}\n"
""
                        "QPushButton#pushButton_4:hover{\n"
"background-color: rgb(180,180,0);\n"
"}\n"
"QPushButton#pushButton_4:pressed{\n"
"background-color: rgb(100,100,0);\n"
"}"));
        centralwidget = new QWidget(Opening);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 4);

        horizontalLayout_3->addLayout(verticalLayout_2);

        Opening->setCentralWidget(centralwidget);

        retranslateUi(Opening);

        QMetaObject::connectSlotsByName(Opening);
    } // setupUi

    void retranslateUi(QMainWindow *Opening)
    {
        Opening->setWindowTitle(QCoreApplication::translate("Opening", "Player Choice", nullptr));
        label->setText(QCoreApplication::translate("Opening", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600; color:#ff0000;\">How</span><span style=\" font-size:28pt; font-weight:600; color:#55ff00;\"> m</span><span style=\" font-size:28pt; font-weight:600; color:#00ff00;\">any</span><span style=\" font-size:28pt; font-weight:600;\"> </span><span style=\" font-size:28pt; font-weight:600; color:#ffff00;\">pla</span><span style=\" font-size:28pt; font-weight:600; color:#0000ff;\">yers?</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Opening", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Opening", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Opening", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Opening", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Opening: public Ui_Opening {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENING_H
