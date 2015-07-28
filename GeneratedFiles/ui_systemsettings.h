/********************************************************************************
** Form generated from reading UI file 'systemsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGS_H
#define UI_SYSTEMSETTINGS_H

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

class Ui_systemSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *systemSettings)
    {
        if (systemSettings->objectName().isEmpty())
            systemSettings->setObjectName(QString::fromUtf8("systemSettings"));
        systemSettings->resize(502, 306);
        gridLayout = new QGridLayout(systemSettings);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(systemSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(systemSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        label = new QLabel(systemSettings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit = new QLineEdit(systemSettings);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(systemSettings);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(systemSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(systemSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_2 = new QLineEdit(systemSettings);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(systemSettings);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(systemSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(systemSettings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);


        retranslateUi(systemSettings);

        QMetaObject::connectSlotsByName(systemSettings);
    } // setupUi

    void retranslateUi(QDialog *systemSettings)
    {
        systemSettings->setWindowTitle(QApplication::translate("systemSettings", "systemSettings", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("systemSettings", "\342\204\226 \320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("systemSettings", "\320\237\321\200\320\270\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("systemSettings", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\321\203", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("systemSettings", "\320\237\321\200\320\276\320\264\320\260\320\266\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("systemSettings", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202 \320\276\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("systemSettings", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("systemSettings", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class systemSettings: public Ui_systemSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGS_H
