/********************************************************************************
** Form generated from reading UI file 'addviruchka.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVIRUCHKA_H
#define UI_ADDVIRUCHKA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addViruchka
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QDateEdit *virData;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *virDLC;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *virRub;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *virDol;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *virKurs;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *virOk;
    QPushButton *virCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *addViruchka)
    {
        if (addViruchka->objectName().isEmpty())
            addViruchka->setObjectName(QString::fromUtf8("addViruchka"));
        addViruchka->resize(475, 189);
        gridLayout_2 = new QGridLayout(addViruchka);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(addViruchka);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        virData = new QDateEdit(addViruchka);
        virData->setObjectName(QString::fromUtf8("virData"));

        verticalLayout_4->addWidget(virData);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(addViruchka);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        virDLC = new QLineEdit(addViruchka);
        virDLC->setObjectName(QString::fromUtf8("virDLC"));

        verticalLayout_5->addWidget(virDLC);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(addViruchka);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        virRub = new QDoubleSpinBox(addViruchka);
        virRub->setObjectName(QString::fromUtf8("virRub"));
        virRub->setMaximum(1e+09);

        horizontalLayout_2->addWidget(virRub);

        label_5 = new QLabel(addViruchka);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        virDol = new QDoubleSpinBox(addViruchka);
        virDol->setObjectName(QString::fromUtf8("virDol"));
        virDol->setMaximum(1e+09);

        horizontalLayout->addWidget(virDol);

        label_6 = new QLabel(addViruchka);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(addViruchka);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        virKurs = new QDoubleSpinBox(addViruchka);
        virKurs->setObjectName(QString::fromUtf8("virKurs"));
        virKurs->setMaximum(100000);

        horizontalLayout_4->addWidget(virKurs);

        label_7 = new QLabel(addViruchka);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        virOk = new QPushButton(addViruchka);
        virOk->setObjectName(QString::fromUtf8("virOk"));

        horizontalLayout_6->addWidget(virOk);

        virCancel = new QPushButton(addViruchka);
        virCancel->setObjectName(QString::fromUtf8("virCancel"));

        horizontalLayout_6->addWidget(virCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(addViruchka);

        QMetaObject::connectSlotsByName(addViruchka);
    } // setupUi

    void retranslateUi(QDialog *addViruchka)
    {
        addViruchka->setWindowTitle(QApplication::translate("addViruchka", "addViruchka", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addViruchka", "\320\224\320\260\321\202\320\260 \320\276\320\277\320\273\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addViruchka", "\320\227\320\260\320\274\320\265\321\207\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addViruchka", "\320\241\321\203\320\274\320\274\320\260", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addViruchka", "\321\200\321\203\320\261.", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addViruchka", "$", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addViruchka", "\320\232\321\203\321\200\321\201", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("addViruchka", "\321\200\321\203\320\261./$", 0, QApplication::UnicodeUTF8));
        virOk->setText(QApplication::translate("addViruchka", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        virCancel->setText(QApplication::translate("addViruchka", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addViruchka: public Ui_addViruchka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVIRUCHKA_H
