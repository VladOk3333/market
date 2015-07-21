/********************************************************************************
** Form generated from reading UI file 'deletegroupwarning.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEGROUPWARNING_H
#define UI_DELETEGROUPWARNING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteGroupWarning
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deleteGroupWarning)
    {
        if (deleteGroupWarning->objectName().isEmpty())
            deleteGroupWarning->setObjectName(QString::fromUtf8("deleteGroupWarning"));
        deleteGroupWarning->resize(300, 80);
        deleteGroupWarning->setMinimumSize(QSize(300, 80));
        deleteGroupWarning->setMaximumSize(QSize(300, 80));
        gridLayout_2 = new QGridLayout(deleteGroupWarning);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(deleteGroupWarning);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushButton = new QPushButton(deleteGroupWarning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(deleteGroupWarning);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(deleteGroupWarning);

        QMetaObject::connectSlotsByName(deleteGroupWarning);
    } // setupUi

    void retranslateUi(QDialog *deleteGroupWarning)
    {
        deleteGroupWarning->setWindowTitle(QApplication::translate("deleteGroupWarning", "deleteGroupWarning", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("deleteGroupWarning", "\320\222\321\213 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203?", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("deleteGroupWarning", "\320\224\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("deleteGroupWarning", "\320\235\320\265\321\202", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class deleteGroupWarning: public Ui_deleteGroupWarning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEGROUPWARNING_H
