/********************************************************************************
** Form generated from reading UI file 'printsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTSETTINGS_H
#define UI_PRINTSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_printSettings
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *printSettings)
    {
        if (printSettings->objectName().isEmpty())
            printSettings->setObjectName(QString::fromUtf8("printSettings"));
        printSettings->resize(580, 212);
        gridLayout = new QGridLayout(printSettings);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(printSettings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(printSettings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(printSettings);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(printSettings);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton = new QPushButton(printSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(printSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(printSettings);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(printSettings);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(printSettings);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(printSettings);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(printSettings);

        QMetaObject::connectSlotsByName(printSettings);
    } // setupUi

    void retranslateUi(QDialog *printSettings)
    {
        printSettings->setWindowTitle(QApplication::translate("printSettings", "printSettings", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("printSettings", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("printSettings", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("printSettings", "\320\222\320\260\320\273\321\216\321\202\320\260", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("printSettings", "\320\240\321\203\320\261\320\273\320\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("printSettings", "\320\224\320\276\320\273\320\273\320\260\321\200\321\213", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("printSettings", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\321\213\321\205..", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("printSettings", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\277\321\200\320\270 \320\277\320\265\321\207\320\260\321\202\320\270 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("printSettings", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\321\217\321\202\321\214 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\213\320\265 \321\201\321\202\321\200\320\276\320\272\320\270", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("printSettings", "\320\237\321\200\320\265\320\264\320\262\320\260\321\200\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\271 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("printSettings", "\320\237\320\265\321\207\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("printSettings", "\320\236\320\272\320\275\320\276 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\277\321\200\320\270\320\275\321\202\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class printSettings: public Ui_printSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTSETTINGS_H
