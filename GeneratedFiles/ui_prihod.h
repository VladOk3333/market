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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
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

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);

        prihodList = new QTableWidget(Prihod);
        if (prihodList->columnCount() < 4)
            prihodList->setColumnCount(4);
        prihodList->setObjectName(QString::fromUtf8("prihodList"));
        prihodList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        prihodList->setSelectionBehavior(QAbstractItemView::SelectRows);
        prihodList->setGridStyle(Qt::SolidLine);
        prihodList->setColumnCount(4);
        prihodList->horizontalHeader()->setVisible(false);
        prihodList->verticalHeader()->setVisible(false);

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
