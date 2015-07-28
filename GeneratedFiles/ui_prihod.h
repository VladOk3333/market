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
    QPushButton *prihodDate;
    QPushButton *prihodParam;
    QPushButton *prihodSort;
    QPushButton *prihodSearch;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *prihodList;
    QVBoxLayout *verticalLayout;
    QPushButton *prihodAdd;
    QPushButton *prihodIzmen;
    QPushButton *prihodDel;
    QPushButton *prihodExit;

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
        prihodDate = new QPushButton(Prihod);
        prihodDate->setObjectName(QString::fromUtf8("prihodDate"));

        horizontalLayout->addWidget(prihodDate);

        prihodParam = new QPushButton(Prihod);
        prihodParam->setObjectName(QString::fromUtf8("prihodParam"));

        horizontalLayout->addWidget(prihodParam);

        prihodSort = new QPushButton(Prihod);
        prihodSort->setObjectName(QString::fromUtf8("prihodSort"));

        horizontalLayout->addWidget(prihodSort);

        prihodSearch = new QPushButton(Prihod);
        prihodSearch->setObjectName(QString::fromUtf8("prihodSearch"));

        horizontalLayout->addWidget(prihodSearch);


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

        prihodList = new QTableWidget(Prihod);
        prihodList->setObjectName(QString::fromUtf8("prihodList"));

        verticalLayout_2->addWidget(prihodList);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        prihodAdd = new QPushButton(Prihod);
        prihodAdd->setObjectName(QString::fromUtf8("prihodAdd"));

        verticalLayout->addWidget(prihodAdd);

        prihodIzmen = new QPushButton(Prihod);
        prihodIzmen->setObjectName(QString::fromUtf8("prihodIzmen"));

        verticalLayout->addWidget(prihodIzmen);

        prihodDel = new QPushButton(Prihod);
        prihodDel->setObjectName(QString::fromUtf8("prihodDel"));

        verticalLayout->addWidget(prihodDel);

        prihodExit = new QPushButton(Prihod);
        prihodExit->setObjectName(QString::fromUtf8("prihodExit"));

        verticalLayout->addWidget(prihodExit);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Prihod);

        QMetaObject::connectSlotsByName(Prihod);
    } // setupUi

    void retranslateUi(QDialog *Prihod)
    {
        Prihod->setWindowTitle(QApplication::translate("Prihod", "Prihod", 0, QApplication::UnicodeUTF8));
        prihodDate->setText(QApplication::translate("Prihod", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        prihodParam->setText(QApplication::translate("Prihod", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262\321\213\320\261\320\276\321\200\320\260", 0, QApplication::UnicodeUTF8));
        prihodSort->setText(QApplication::translate("Prihod", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        prihodSearch->setText(QApplication::translate("Prihod", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Prihod", "\320\235\320\276\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Prihod", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Prihod", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Prihod", "\320\241\321\203\320\274\320\274\320\260", 0, QApplication::UnicodeUTF8));
        prihodAdd->setText(QApplication::translate("Prihod", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        prihodIzmen->setText(QApplication::translate("Prihod", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        prihodDel->setText(QApplication::translate("Prihod", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        prihodExit->setText(QApplication::translate("Prihod", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Prihod: public Ui_Prihod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIHOD_H
