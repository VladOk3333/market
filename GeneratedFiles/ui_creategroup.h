/********************************************************************************
** Form generated from reading UI file 'creategroup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_H
#define UI_CREATEGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createGroup
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *groupTitle;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *OKcreateGroup;
    QPushButton *CancelCreateGroup;

    void setupUi(QDialog *createGroup)
    {
        if (createGroup->objectName().isEmpty())
            createGroup->setObjectName(QString::fromUtf8("createGroup"));
        createGroup->resize(300, 90);
        createGroup->setMinimumSize(QSize(300, 90));
        createGroup->setMaximumSize(QSize(300, 90));
        gridLayout_2 = new QGridLayout(createGroup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(createGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        groupTitle = new QLineEdit(createGroup);
        groupTitle->setObjectName(QString::fromUtf8("groupTitle"));

        horizontalLayout->addWidget(groupTitle);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        OKcreateGroup = new QPushButton(createGroup);
        OKcreateGroup->setObjectName(QString::fromUtf8("OKcreateGroup"));

        horizontalLayout_2->addWidget(OKcreateGroup);

        CancelCreateGroup = new QPushButton(createGroup);
        CancelCreateGroup->setObjectName(QString::fromUtf8("CancelCreateGroup"));

        horizontalLayout_2->addWidget(CancelCreateGroup);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(createGroup);

        QMetaObject::connectSlotsByName(createGroup);
    } // setupUi

    void retranslateUi(QDialog *createGroup)
    {
        createGroup->setWindowTitle(QApplication::translate("createGroup", "createGroup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("createGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        OKcreateGroup->setText(QApplication::translate("createGroup", "OK", 0, QApplication::UnicodeUTF8));
        CancelCreateGroup->setText(QApplication::translate("createGroup", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class createGroup: public Ui_createGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_H
