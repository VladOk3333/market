/********************************************************************************
** Form generated from reading UI file 'documprihod.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMPRIHOD_H
#define UI_DOCUMPRIHOD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_documPrihod
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *documPrihod)
    {
        if (documPrihod->objectName().isEmpty())
            documPrihod->setObjectName(QString::fromUtf8("documPrihod"));
        documPrihod->resize(455, 300);
        documPrihod->setMinimumSize(QSize(450, 300));
        widget = new QWidget(documPrihod);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(44, 100, 371, 90));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(documPrihod);

        QMetaObject::connectSlotsByName(documPrihod);
    } // setupUi

    void retranslateUi(QDialog *documPrihod)
    {
        documPrihod->setWindowTitle(QApplication::translate("documPrihod", "documPrihod", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("documPrihod", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("documPrihod", "\320\222\321\201\320\265 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\270", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("documPrihod", "\320\232\320\273\320\270\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("documPrihod", "\320\222\321\201\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("documPrihod", "\320\241\321\202\320\260\321\202\321\214\321\217 \321\200\320\260\321\201\321\205\320\276\320\264\320\260", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("documPrihod", "\320\222\321\201\320\265 \321\201\321\202\320\260\321\202\321\214\320\270 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("documPrihod", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("documPrihod", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class documPrihod: public Ui_documPrihod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMPRIHOD_H
