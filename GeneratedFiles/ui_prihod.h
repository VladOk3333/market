/********************************************************************************
** Form generated from reading UI file 'prihod.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIHOD_H
#define UI_PRIHOD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Prihod
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Prihod)
    {
        if (Prihod->objectName().isEmpty())
            Prihod->setObjectName(QString::fromUtf8("Prihod"));
        Prihod->resize(609, 304);
        Prihod->setMinimumSize(QSize(600, 300));
        gridLayout_2 = new QGridLayout(Prihod);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_3 = new QPushButton(Prihod);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(Prihod);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(Prihod);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_7 = new QPushButton(Prihod);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Prihod);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(Prihod);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(Prihod);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(Prihod);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(Prihod);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_8 = new QPushButton(Prihod);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(Prihod);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(Prihod);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Prihod);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableWidget->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        tableWidget->raise();

        retranslateUi(Prihod);

        QMetaObject::connectSlotsByName(Prihod);
    } // setupUi

    void retranslateUi(QDialog *Prihod)
    {
        Prihod->setWindowTitle(QApplication::translate("Prihod", "Prihod", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Prihod", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Prihod", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262\321\213\320\261\320\276\321\200\320\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Prihod", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Prihod", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Prihod", "\320\235\320\276\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Prihod", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Prihod", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Prihod", "\320\241\321\203\320\274\320\274\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Prihod", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Prihod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Prihod", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Prihod", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Prihod: public Ui_Prihod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIHOD_H
