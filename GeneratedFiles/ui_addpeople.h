/********************************************************************************
** Form generated from reading UI file 'addpeople.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLE_H
#define UI_ADDPEOPLE_H

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

class Ui_addPeople
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *companyTitle;
    QLineEdit *companyFullTitle;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QLineEdit *INN;
    QLabel *label_4;
    QLineEdit *KPP;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *companyUrAddress;
    QLineEdit *companyFactAddress;
    QLineEdit *companyGruz;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *companyPhones;
    QLineEdit *companyFax;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *companyMetro;
    QLineEdit *companyMail;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_16;
    QLineEdit *companyRasSchet;
    QLineEdit *companyBank;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *companyKorSchet;
    QLineEdit *companyDirector;
    QLineEdit *companyBuh;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *BIK;
    QLineEdit *OKVED;
    QLineEdit *OKPO;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_23;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *contact;
    QLineEdit *DLC;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *companyOK;
    QPushButton *companyChange;
    QPushButton *companyCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *addPeople)
    {
        if (addPeople->objectName().isEmpty())
            addPeople->setObjectName(QString::fromUtf8("addPeople"));
        addPeople->resize(658, 566);
        gridLayout = new QGridLayout(addPeople);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(addPeople);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(addPeople);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout_10->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        companyTitle = new QLineEdit(addPeople);
        companyTitle->setObjectName(QString::fromUtf8("companyTitle"));

        verticalLayout_2->addWidget(companyTitle);

        companyFullTitle = new QLineEdit(addPeople);
        companyFullTitle->setObjectName(QString::fromUtf8("companyFullTitle"));

        verticalLayout_2->addWidget(companyFullTitle);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_3 = new QLabel(addPeople);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_16->addWidget(label_3);

        INN = new QLineEdit(addPeople);
        INN->setObjectName(QString::fromUtf8("INN"));

        horizontalLayout_16->addWidget(INN);

        label_4 = new QLabel(addPeople);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_16->addWidget(label_4);

        KPP = new QLineEdit(addPeople);
        KPP->setObjectName(QString::fromUtf8("KPP"));

        horizontalLayout_16->addWidget(KPP);


        verticalLayout_3->addLayout(horizontalLayout_16);


        verticalLayout_11->addLayout(verticalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(addPeople);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(addPeople);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(addPeople);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        companyUrAddress = new QLineEdit(addPeople);
        companyUrAddress->setObjectName(QString::fromUtf8("companyUrAddress"));

        verticalLayout_5->addWidget(companyUrAddress);

        companyFactAddress = new QLineEdit(addPeople);
        companyFactAddress->setObjectName(QString::fromUtf8("companyFactAddress"));

        verticalLayout_5->addWidget(companyFactAddress);

        companyGruz = new QLineEdit(addPeople);
        companyGruz->setObjectName(QString::fromUtf8("companyGruz"));

        verticalLayout_5->addWidget(companyGruz);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(addPeople);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(addPeople);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_6->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        companyPhones = new QLineEdit(addPeople);
        companyPhones->setObjectName(QString::fromUtf8("companyPhones"));

        verticalLayout_8->addWidget(companyPhones);

        companyFax = new QLineEdit(addPeople);
        companyFax->setObjectName(QString::fromUtf8("companyFax"));

        verticalLayout_8->addWidget(companyFax);


        horizontalLayout_3->addLayout(verticalLayout_8);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_10 = new QLabel(addPeople);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_7->addWidget(label_10);

        label_11 = new QLabel(addPeople);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        companyMetro = new QLineEdit(addPeople);
        companyMetro->setObjectName(QString::fromUtf8("companyMetro"));

        verticalLayout_9->addWidget(companyMetro);

        companyMail = new QLineEdit(addPeople);
        companyMail->setObjectName(QString::fromUtf8("companyMail"));

        verticalLayout_9->addWidget(companyMail);


        horizontalLayout_2->addLayout(verticalLayout_9);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_21->addLayout(verticalLayout_11);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_12 = new QLabel(addPeople);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_15->addWidget(label_12);

        label_13 = new QLabel(addPeople);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_15->addWidget(label_13);


        horizontalLayout_6->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        companyRasSchet = new QLineEdit(addPeople);
        companyRasSchet->setObjectName(QString::fromUtf8("companyRasSchet"));

        verticalLayout_16->addWidget(companyRasSchet);

        companyBank = new QLineEdit(addPeople);
        companyBank->setObjectName(QString::fromUtf8("companyBank"));

        verticalLayout_16->addWidget(companyBank);


        horizontalLayout_6->addLayout(verticalLayout_16);


        verticalLayout_18->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_14 = new QLabel(addPeople);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_14->addWidget(label_14);

        label_16 = new QLabel(addPeople);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_14->addWidget(label_16);

        label_20 = new QLabel(addPeople);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_14->addWidget(label_20);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        companyKorSchet = new QLineEdit(addPeople);
        companyKorSchet->setObjectName(QString::fromUtf8("companyKorSchet"));

        verticalLayout_17->addWidget(companyKorSchet);

        companyDirector = new QLineEdit(addPeople);
        companyDirector->setObjectName(QString::fromUtf8("companyDirector"));

        verticalLayout_17->addWidget(companyDirector);

        companyBuh = new QLineEdit(addPeople);
        companyBuh->setObjectName(QString::fromUtf8("companyBuh"));

        verticalLayout_17->addWidget(companyBuh);


        horizontalLayout_7->addLayout(verticalLayout_17);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_15 = new QLabel(addPeople);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_13->addWidget(label_15);

        label_17 = new QLabel(addPeople);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_13->addWidget(label_17);

        label_18 = new QLabel(addPeople);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_13->addWidget(label_18);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        BIK = new QLineEdit(addPeople);
        BIK->setObjectName(QString::fromUtf8("BIK"));

        verticalLayout_12->addWidget(BIK);

        OKVED = new QLineEdit(addPeople);
        OKVED->setObjectName(QString::fromUtf8("OKVED"));

        verticalLayout_12->addWidget(OKVED);

        OKPO = new QLineEdit(addPeople);
        OKPO->setObjectName(QString::fromUtf8("OKPO"));

        verticalLayout_12->addWidget(OKPO);


        horizontalLayout_5->addLayout(verticalLayout_12);


        horizontalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_18->addLayout(horizontalLayout_8);


        verticalLayout_21->addLayout(verticalLayout_18);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_23 = new QLabel(addPeople);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_19->addWidget(label_23);

        label_22 = new QLabel(addPeople);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_19->addWidget(label_22);


        horizontalLayout_9->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        contact = new QLineEdit(addPeople);
        contact->setObjectName(QString::fromUtf8("contact"));

        verticalLayout_20->addWidget(contact);

        DLC = new QLineEdit(addPeople);
        DLC->setObjectName(QString::fromUtf8("DLC"));

        verticalLayout_20->addWidget(DLC);


        horizontalLayout_9->addLayout(verticalLayout_20);


        verticalLayout_21->addLayout(horizontalLayout_9);


        verticalLayout_22->addLayout(verticalLayout_21);


        gridLayout->addLayout(verticalLayout_22, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        companyOK = new QPushButton(addPeople);
        companyOK->setObjectName(QString::fromUtf8("companyOK"));

        horizontalLayout_11->addWidget(companyOK);

        companyChange = new QPushButton(addPeople);
        companyChange->setObjectName(QString::fromUtf8("companyChange"));

        horizontalLayout_11->addWidget(companyChange);

        companyCancel = new QPushButton(addPeople);
        companyCancel->setObjectName(QString::fromUtf8("companyCancel"));

        horizontalLayout_11->addWidget(companyCancel);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_13, 1, 0, 1, 1);


        retranslateUi(addPeople);

        QMetaObject::connectSlotsByName(addPeople);
    } // setupUi

    void retranslateUi(QDialog *addPeople)
    {
        addPeople->setWindowTitle(QApplication::translate("addPeople", "addPeople", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addPeople", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addPeople", "\320\237\320\276\320\273\320\275\320\276\320\265", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addPeople", "\320\230\320\235\320\235", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addPeople", "\320\232\320\237\320\237", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addPeople", "\320\256\321\200.\320\220\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addPeople", "\320\244\320\260\320\272\321\202.\320\260\320\264\321\200\320\265\321\201", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("addPeople", "\320\223\321\200\321\203\320\267\320\276-\321\202\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("addPeople", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\321\213", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("addPeople", "\320\244\320\260\320\272\321\201", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("addPeople", "\320\234\320\265\321\202\321\200\320\276", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("addPeople", "E-Mail", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("addPeople", "\320\240\320\260\321\201\321\207.\321\201\321\207\320\265\321\202", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("addPeople", "\320\221\320\260\320\275\320\272", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("addPeople", "\320\232\320\276\321\200.\321\201\321\207\320\265\321\202", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("addPeople", "\320\224\320\270\321\200\320\265\320\272\321\202\320\276\321\200", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("addPeople", "\320\223\320\273.\320\261\321\203\321\205.", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("addPeople", "\320\221\320\230\320\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("addPeople", "\320\236\320\232\320\222\320\255\320\224", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("addPeople", "\320\236\320\232\320\237\320\236", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("addPeople", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("addPeople", "\320\224\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        companyOK->setText(QApplication::translate("addPeople", "\320\236\320\232", 0, QApplication::UnicodeUTF8));
        companyChange->setText(QApplication::translate("addPeople", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        companyCancel->setText(QApplication::translate("addPeople", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addPeople: public Ui_addPeople {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLE_H
