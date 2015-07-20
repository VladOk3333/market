/********************************************************************************
** Form generated from reading UI file 'dataprihod.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPRIHOD_H
#define UI_DATAPRIHOD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataPrihod
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *dataPrihod)
    {
        if (dataPrihod->objectName().isEmpty())
            dataPrihod->setObjectName(QString::fromUtf8("dataPrihod"));
        dataPrihod->resize(438, 220);
        dataPrihod->setMinimumSize(QSize(400, 220));
        widget = new QWidget(dataPrihod);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 80, 281, 67));
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        horizontalLayout_3->addLayout(horizontalLayout);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit_2 = new QDateEdit(widget);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout_2->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


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


        retranslateUi(dataPrihod);

        QMetaObject::connectSlotsByName(dataPrihod);
    } // setupUi

    void retranslateUi(QDialog *dataPrihod)
    {
        dataPrihod->setWindowTitle(QApplication::translate("dataPrihod", "dataPrihod", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dataPrihod", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dataPrihod", "\321\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dataPrihod", "\320\264\320\276", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dataPrihod", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dataPrihod", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dataPrihod: public Ui_dataPrihod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPRIHOD_H
