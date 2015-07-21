/********************************************************************************
** Form generated from reading UI file 'addgroup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUP_H
#define UI_ADDGROUP_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addGroup
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *addGroup)
    {
        if (addGroup->objectName().isEmpty())
            addGroup->setObjectName(QString::fromUtf8("addGroup"));
        addGroup->resize(514, 337);
        gridLayout = new QGridLayout(addGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(addGroup);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(addGroup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(addGroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(addGroup);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(addGroup);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(addGroup);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(addGroup);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(addGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(addGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(addGroup);

        QMetaObject::connectSlotsByName(addGroup);
    } // setupUi

    void retranslateUi(QDialog *addGroup)
    {
        addGroup->setWindowTitle(QApplication::translate("addGroup", "addGroup", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addGroup", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("addGroup", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("addGroup", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("addGroup", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("addGroup", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("addGroup", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addGroup", "\320\222\321\201\320\265\320\263\320\276", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addGroup", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addGroup: public Ui_addGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUP_H
