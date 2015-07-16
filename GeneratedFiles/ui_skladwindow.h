/********************************************************************************
** Form generated from reading UI file 'skladwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKLADWINDOW_H
#define UI_SKLADWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_skladWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_6;

    void setupUi(QDialog *skladWindow)
    {
        if (skladWindow->objectName().isEmpty())
            skladWindow->setObjectName(QString::fromUtf8("skladWindow"));
        skladWindow->resize(856, 511);
        verticalLayout = new QVBoxLayout(skladWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(skladWindow);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_5->addWidget(label_14);

        comboBox_3 = new QComboBox(skladWindow);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        verticalLayout_5->addWidget(comboBox_3);


        horizontalLayout_11->addLayout(verticalLayout_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_15 = new QLabel(skladWindow);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_6->addWidget(label_15);

        lineEdit_3 = new QLineEdit(skladWindow);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_6->addWidget(lineEdit_3);


        horizontalLayout_11->addLayout(verticalLayout_6);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        pushButton_5 = new QPushButton(skladWindow);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_11->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_11);

        tableWidget = new QTableWidget(skladWindow);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(skladWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(skladWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        label_13 = new QLabel(skladWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);


        horizontalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        checkBox_3 = new QCheckBox(skladWindow);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_12->addWidget(checkBox_3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        pushButton_6 = new QPushButton(skladWindow);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_12->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_12);


        retranslateUi(skladWindow);

        QMetaObject::connectSlotsByName(skladWindow);
    } // setupUi

    void retranslateUi(QDialog *skladWindow)
    {
        skladWindow->setWindowTitle(QApplication::translate("skladWindow", "skladWindow", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("skladWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("skladWindow", "\320\244\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("skladWindow", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("skladWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("skladWindow", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\277\320\270\321\201\320\270", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("skladWindow", "\320\224\320\260\321\202\320\260 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("skladWindow", "\320\222\321\201\320\265 \321\202\320\276\320\262\320\260\321\200\321\213", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("skladWindow", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class skladWindow: public Ui_skladWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKLADWINDOW_H
