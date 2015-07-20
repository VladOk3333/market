/********************************************************************************
** Form generated from reading UI file 'searchinsklad.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHINSKLAD_H
#define UI_SEARCHINSKLAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchInSklad
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SearchInSklad)
    {
        if (SearchInSklad->objectName().isEmpty())
            SearchInSklad->setObjectName(QString::fromUtf8("SearchInSklad"));
        SearchInSklad->resize(450, 350);
        SearchInSklad->setMinimumSize(QSize(450, 350));
        widget = new QWidget(SearchInSklad);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 110, 282, 102));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SearchInSklad);

        QMetaObject::connectSlotsByName(SearchInSklad);
    } // setupUi

    void retranslateUi(QDialog *SearchInSklad)
    {
        SearchInSklad->setWindowTitle(QApplication::translate("SearchInSklad", "SearchInSklad", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchInSklad", "\320\237\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SearchInSklad", "\320\235\320\260\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SearchInSklad", "\320\235\320\260\320\271\321\202\320\270 \320\264\320\260\320\273\320\265\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("SearchInSklad", "\320\236\320\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchInSklad: public Ui_SearchInSklad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINSKLAD_H
