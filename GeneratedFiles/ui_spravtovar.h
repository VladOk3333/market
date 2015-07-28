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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_spravTovar
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QToolButton *addingGroup;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *addingGroupAdd;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *spravTovar)
    {
        if (spravTovar->objectName().isEmpty())
            spravTovar->setObjectName(QString::fromUtf8("spravTovar"));
        spravTovar->resize(599, 433);
        gridLayout = new QGridLayout(spravTovar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(spravTovar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(spravTovar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox = new QComboBox(spravTovar);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBox);

        addingGroup = new QToolButton(spravTovar);
        addingGroup->setObjectName(QString::fromUtf8("addingGroup"));

        horizontalLayout_2->addWidget(addingGroup);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(spravTovar);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(spravTovar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(spravTovar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(spravTovar);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        addingGroupAdd = new QPushButton(spravTovar);
        addingGroupAdd->setObjectName(QString::fromUtf8("addingGroupAdd"));

        verticalLayout->addWidget(addingGroupAdd);

        pushButton_4 = new QPushButton(spravTovar);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(spravTovar);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(spravTovar);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);


        gridLayout->addLayout(verticalLayout, 2, 2, 2, 1);

        tableWidget = new QTableWidget(spravTovar);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(spravTovar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(spravTovar);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(spravTovar);

        QMetaObject::connectSlotsByName(spravTovar);
    } // setupUi

    void retranslateUi(QDialog *spravTovar)
    {
        spravTovar->setWindowTitle(QApplication::translate("spravTovar", "spravTovar", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("spravTovar", "\320\223\321\200\321\203\320\277\320\277\320\260", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("spravTovar", "\320\244\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
        addingGroup->setText(QApplication::translate("spravTovar", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("spravTovar", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("spravTovar", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("spravTovar", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        addingGroupAdd->setText(QApplication::translate("spravTovar", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("spravTovar", "\320\232\320\276\320\277\320\270\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("spravTovar", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("spravTovar", "\320\236\320\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("spravTovar", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("spravTovar", "\320\235\320\276\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class spravTovar: public Ui_spravTovar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAVTOVAR_H
