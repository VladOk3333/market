/********************************************************************************
** Form generated from reading UI file 'titlesettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLESETTINGS_H
#define UI_TITLESETTINGS_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_titleSettings
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *titleSettings)
    {
        if (titleSettings->objectName().isEmpty())
            titleSettings->setObjectName(QString::fromUtf8("titleSettings"));
        titleSettings->resize(387, 300);
        gridLayout = new QGridLayout(titleSettings);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(titleSettings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(titleSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(titleSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(titleSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(titleSettings);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(titleSettings);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(titleSettings);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(titleSettings);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(titleSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(titleSettings);

        QMetaObject::connectSlotsByName(titleSettings);
    } // setupUi

    void retranslateUi(QDialog *titleSettings)
    {
        titleSettings->setWindowTitle(QApplication::translate("titleSettings", "titleSettings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("titleSettings", "\320\237\321\200\320\270\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("titleSettings", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\321\203", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("titleSettings", "\320\237\321\200\320\276\320\264\320\260\320\266\320\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("titleSettings", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202 \320\276\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("titleSettings", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217 \320\275\320\260 \320\277\321\200\320\270\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("titleSettings", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217 \320\275\320\260 \321\203\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("titleSettings", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217 \320\275\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\321\203", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("titleSettings", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217 \320\275\320\260 \320\262\320\276\320\267\320\262\321\200\320\260\321\202", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("titleSettings", "\320\236\320\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class titleSettings: public Ui_titleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLESETTINGS_H
