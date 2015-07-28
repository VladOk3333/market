/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_addProduct
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLineEdit *addProductName;
    QLineEdit *addProductCountry;
    QLineEdit *addProductIzm;
    QLabel *label_5;
    QDoubleSpinBox *addProductNDS;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *addProductGroup;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addProductAdd;
    QPushButton *addProductExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *addProduct)
    {
        if (addProduct->objectName().isEmpty())
            addProduct->setObjectName(QString::fromUtf8("addProduct"));
        addProduct->resize(333, 206);
        gridLayout_3 = new QGridLayout(addProduct);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(addProduct);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(addProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(addProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(addProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addProductName = new QLineEdit(addProduct);
        addProductName->setObjectName(QString::fromUtf8("addProductName"));

        gridLayout->addWidget(addProductName, 0, 0, 1, 2);

        addProductCountry = new QLineEdit(addProduct);
        addProductCountry->setObjectName(QString::fromUtf8("addProductCountry"));

        gridLayout->addWidget(addProductCountry, 1, 0, 1, 2);

        addProductIzm = new QLineEdit(addProduct);
        addProductIzm->setObjectName(QString::fromUtf8("addProductIzm"));

        gridLayout->addWidget(addProductIzm, 2, 0, 1, 2);

        label_5 = new QLabel(addProduct);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        addProductNDS = new QDoubleSpinBox(addProduct);
        addProductNDS->setObjectName(QString::fromUtf8("addProductNDS"));

        gridLayout->addWidget(addProductNDS, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(addProduct);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        addProductGroup = new QComboBox(addProduct);
        addProductGroup->setObjectName(QString::fromUtf8("addProductGroup"));
        addProductGroup->setMinimumSize(QSize(270, 0));

        horizontalLayout->addWidget(addProductGroup);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addProductAdd = new QPushButton(addProduct);
        addProductAdd->setObjectName(QString::fromUtf8("addProductAdd"));

        horizontalLayout_2->addWidget(addProductAdd);

        addProductExit = new QPushButton(addProduct);
        addProductExit->setObjectName(QString::fromUtf8("addProductExit"));

        horizontalLayout_2->addWidget(addProductExit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(addProduct);

        QMetaObject::connectSlotsByName(addProduct);
    } // setupUi

    void retranslateUi(QDialog *addProduct)
    {
        addProduct->setWindowTitle(QApplication::translate("addProduct", "addProduct", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addProduct", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addProduct", "\320\241\321\202\321\200\320\260\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addProduct", "\320\225\320\264.\320\270\320\267\320\274.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addProduct", "\320\235\320\224\320\241", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addProduct", "%", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addProduct", "\320\223\321\200\321\203\320\277\320\277\320\260", 0, QApplication::UnicodeUTF8));
        addProductAdd->setText(QApplication::translate("addProduct", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        addProductExit->setText(QApplication::translate("addProduct", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addProduct: public Ui_addProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
