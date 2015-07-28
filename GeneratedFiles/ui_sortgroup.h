/********************************************************************************
** Form generated from reading UI file 'sortgroup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTGROUP_H
#define UI_SORTGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_sortGroup
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *sortGroupList;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *sortGroupUp;
    QPushButton *sortGroupDown;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *sortGroupExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *sortGroup)
    {
        if (sortGroup->objectName().isEmpty())
            sortGroup->setObjectName(QString::fromUtf8("sortGroup"));
        sortGroup->resize(400, 400);
        sortGroup->setMinimumSize(QSize(400, 400));
        sortGroup->setMaximumSize(QSize(400, 400));
        gridLayout_2 = new QGridLayout(sortGroup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sortGroupList = new QListWidget(sortGroup);
        sortGroupList->setObjectName(QString::fromUtf8("sortGroupList"));

        gridLayout_2->addWidget(sortGroupList, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sortGroupUp = new QPushButton(sortGroup);
        sortGroupUp->setObjectName(QString::fromUtf8("sortGroupUp"));

        horizontalLayout->addWidget(sortGroupUp);

        sortGroupDown = new QPushButton(sortGroup);
        sortGroupDown->setObjectName(QString::fromUtf8("sortGroupDown"));

        horizontalLayout->addWidget(sortGroupDown);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sortGroupExit = new QPushButton(sortGroup);
        sortGroupExit->setObjectName(QString::fromUtf8("sortGroupExit"));

        horizontalLayout_2->addWidget(sortGroupExit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(sortGroup);

        QMetaObject::connectSlotsByName(sortGroup);
    } // setupUi

    void retranslateUi(QDialog *sortGroup)
    {
        sortGroup->setWindowTitle(QApplication::translate("sortGroup", "sortGroup", 0, QApplication::UnicodeUTF8));
        sortGroupUp->setText(QApplication::translate("sortGroup", "\320\222\320\262\320\265\321\200\321\205 \320\277\320\276 \321\201\320\277\320\270\321\201\320\272\321\203", 0, QApplication::UnicodeUTF8));
        sortGroupDown->setText(QApplication::translate("sortGroup", "\320\222\320\275\320\270\320\267 \320\277\320\276 \321\201\320\277\320\270\321\201\320\272\321\203", 0, QApplication::UnicodeUTF8));
        sortGroupExit->setText(QApplication::translate("sortGroup", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sortGroup: public Ui_sortGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTGROUP_H
