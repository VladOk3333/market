/********************************************************************************
** Form generated from reading UI file 'spravtovar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRAVTOVAR_H
#define UI_SPRAVTOVAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_spravTovar
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QPushButton *addingGroup;
    QPushButton *spravTovarSearch;
    QPushButton *spravTovarChange;
    QPushButton *spravTovarAdd;
    QPushButton *spravTovarCopy;
    QPushButton *spravTovarDelete;
    QPushButton *spravTovarExit;
    QListWidget *spravTovarList;
    QHBoxLayout *horizontalLayout;
    QLabel *productLabelName;
    QLabel *productLabelNum;

    void setupUi(QDialog *spravTovar)
    {
        if (spravTovar->objectName().isEmpty())
            spravTovar->setObjectName(QString::fromUtf8("spravTovar"));
        spravTovar->resize(599, 433);
        gridLayout = new QGridLayout(spravTovar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(spravTovar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addingGroup = new QPushButton(spravTovar);
        addingGroup->setObjectName(QString::fromUtf8("addingGroup"));

        verticalLayout->addWidget(addingGroup);

        spravTovarSearch = new QPushButton(spravTovar);
        spravTovarSearch->setObjectName(QString::fromUtf8("spravTovarSearch"));

        verticalLayout->addWidget(spravTovarSearch);

        spravTovarChange = new QPushButton(spravTovar);
        spravTovarChange->setObjectName(QString::fromUtf8("spravTovarChange"));

        verticalLayout->addWidget(spravTovarChange);

        spravTovarAdd = new QPushButton(spravTovar);
        spravTovarAdd->setObjectName(QString::fromUtf8("spravTovarAdd"));

        verticalLayout->addWidget(spravTovarAdd);

        spravTovarCopy = new QPushButton(spravTovar);
        spravTovarCopy->setObjectName(QString::fromUtf8("spravTovarCopy"));

        verticalLayout->addWidget(spravTovarCopy);

        spravTovarDelete = new QPushButton(spravTovar);
        spravTovarDelete->setObjectName(QString::fromUtf8("spravTovarDelete"));

        verticalLayout->addWidget(spravTovarDelete);

        spravTovarExit = new QPushButton(spravTovar);
        spravTovarExit->setObjectName(QString::fromUtf8("spravTovarExit"));

        verticalLayout->addWidget(spravTovarExit);


        gridLayout->addLayout(verticalLayout, 0, 2, 2, 1);

        spravTovarList = new QListWidget(spravTovar);
        spravTovarList->setObjectName(QString::fromUtf8("spravTovarList"));

        gridLayout->addWidget(spravTovarList, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        productLabelName = new QLabel(spravTovar);
        productLabelName->setObjectName(QString::fromUtf8("productLabelName"));

        horizontalLayout->addWidget(productLabelName);

        productLabelNum = new QLabel(spravTovar);
        productLabelNum->setObjectName(QString::fromUtf8("productLabelNum"));

        horizontalLayout->addWidget(productLabelNum);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(spravTovar);

        QMetaObject::connectSlotsByName(spravTovar);
    } // setupUi

    void retranslateUi(QDialog *spravTovar)
    {
        spravTovar->setWindowTitle(QApplication::translate("spravTovar", "spravTovar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("spravTovar", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        addingGroup->setText(QApplication::translate("spravTovar", "\320\223\321\200\321\203\320\277\320\277\321\213", 0, QApplication::UnicodeUTF8));
        spravTovarSearch->setText(QApplication::translate("spravTovar", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        spravTovarChange->setText(QApplication::translate("spravTovar", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        spravTovarAdd->setText(QApplication::translate("spravTovar", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        spravTovarCopy->setText(QApplication::translate("spravTovar", "\320\232\320\276\320\277\320\270\321\217", 0, QApplication::UnicodeUTF8));
        spravTovarDelete->setText(QApplication::translate("spravTovar", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        spravTovarExit->setText(QApplication::translate("spravTovar", "\320\236\320\232", 0, QApplication::UnicodeUTF8));
        productLabelName->setText(QApplication::translate("spravTovar", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        productLabelNum->setText(QApplication::translate("spravTovar", "\320\235\320\276\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class spravTovar: public Ui_spravTovar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAVTOVAR_H
