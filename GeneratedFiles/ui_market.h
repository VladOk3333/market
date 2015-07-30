/********************************************************************************
** Form generated from reading UI file 'market.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKET_H
#define UI_MARKET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_marketClass
{
public:
    QAction *sostoyanie;
    QAction *prihod;
    QAction *vozvrat_post;
    QAction *prodaja;
    QAction *vozvrat;
    QAction *kassa;
    QAction *viruchka;
    QAction *rashod_kassa;
    QAction *system_settings;
    QAction *workplace_settings;
    QAction *print_settings;
    QAction *rekvizit;
    QAction *kurs;
    QAction *spravochnik_tovar;
    QAction *spravochnik_client;
    QAction *spravochnik_postavshik;
    QAction *spravochnik_rashod;
    QAction *print_naklad;
    QAction *print_chek;
    QAction *cennik;
    QAction *instruction;
    QAction *about;
    QAction *filtr;
    QAction *ext;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *exitApp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *marketClass)
    {
        if (marketClass->objectName().isEmpty())
            marketClass->setObjectName(QString::fromUtf8("marketClass"));
        marketClass->resize(864, 463);
        sostoyanie = new QAction(marketClass);
        sostoyanie->setObjectName(QString::fromUtf8("sostoyanie"));
        prihod = new QAction(marketClass);
        prihod->setObjectName(QString::fromUtf8("prihod"));
        vozvrat_post = new QAction(marketClass);
        vozvrat_post->setObjectName(QString::fromUtf8("vozvrat_post"));
        prodaja = new QAction(marketClass);
        prodaja->setObjectName(QString::fromUtf8("prodaja"));
        vozvrat = new QAction(marketClass);
        vozvrat->setObjectName(QString::fromUtf8("vozvrat"));
        kassa = new QAction(marketClass);
        kassa->setObjectName(QString::fromUtf8("kassa"));
        viruchka = new QAction(marketClass);
        viruchka->setObjectName(QString::fromUtf8("viruchka"));
        rashod_kassa = new QAction(marketClass);
        rashod_kassa->setObjectName(QString::fromUtf8("rashod_kassa"));
        system_settings = new QAction(marketClass);
        system_settings->setObjectName(QString::fromUtf8("system_settings"));
        workplace_settings = new QAction(marketClass);
        workplace_settings->setObjectName(QString::fromUtf8("workplace_settings"));
        print_settings = new QAction(marketClass);
        print_settings->setObjectName(QString::fromUtf8("print_settings"));
        rekvizit = new QAction(marketClass);
        rekvizit->setObjectName(QString::fromUtf8("rekvizit"));
        kurs = new QAction(marketClass);
        kurs->setObjectName(QString::fromUtf8("kurs"));
        spravochnik_tovar = new QAction(marketClass);
        spravochnik_tovar->setObjectName(QString::fromUtf8("spravochnik_tovar"));
        spravochnik_client = new QAction(marketClass);
        spravochnik_client->setObjectName(QString::fromUtf8("spravochnik_client"));
        spravochnik_postavshik = new QAction(marketClass);
        spravochnik_postavshik->setObjectName(QString::fromUtf8("spravochnik_postavshik"));
        spravochnik_rashod = new QAction(marketClass);
        spravochnik_rashod->setObjectName(QString::fromUtf8("spravochnik_rashod"));
        print_naklad = new QAction(marketClass);
        print_naklad->setObjectName(QString::fromUtf8("print_naklad"));
        print_chek = new QAction(marketClass);
        print_chek->setObjectName(QString::fromUtf8("print_chek"));
        cennik = new QAction(marketClass);
        cennik->setObjectName(QString::fromUtf8("cennik"));
        instruction = new QAction(marketClass);
        instruction->setObjectName(QString::fromUtf8("instruction"));
        about = new QAction(marketClass);
        about->setObjectName(QString::fromUtf8("about"));
        filtr = new QAction(marketClass);
        filtr->setObjectName(QString::fromUtf8("filtr"));
        ext = new QAction(marketClass);
        ext->setObjectName(QString::fromUtf8("ext"));
        centralWidget = new QWidget(marketClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        marketClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(marketClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 864, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        exitApp = new QMenu(menuBar);
        exitApp->setObjectName(QString::fromUtf8("exitApp"));
        marketClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(marketClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        marketClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(marketClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        marketClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(exitApp->menuAction());
        menu->addAction(sostoyanie);
        menu->addSeparator();
        menu->addAction(prihod);
        menu->addAction(vozvrat_post);
        menu_2->addAction(prodaja);
        menu_2->addAction(vozvrat);
        menu_3->addAction(kassa);
        menu_3->addSeparator();
        menu_3->addAction(viruchka);
        menu_3->addAction(rashod_kassa);
        menu_4->addAction(system_settings);
        menu_4->addAction(workplace_settings);
        menu_4->addSeparator();
        menu_4->addAction(rekvizit);
        menu_4->addAction(kurs);
        menu_5->addAction(spravochnik_tovar);
        menu_5->addSeparator();
        menu_5->addAction(spravochnik_client);
        menu_5->addAction(spravochnik_postavshik);
        menu_5->addSeparator();
        menu_5->addAction(spravochnik_rashod);

        retranslateUi(marketClass);

        QMetaObject::connectSlotsByName(marketClass);
    } // setupUi

    void retranslateUi(QMainWindow *marketClass)
    {
        marketClass->setWindowTitle(QApplication::translate("marketClass", "market", 0, QApplication::UnicodeUTF8));
        sostoyanie->setText(QApplication::translate("marketClass", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        prihod->setText(QApplication::translate("marketClass", "\320\237\321\200\320\270\321\205\320\276\320\264\321\213", 0, QApplication::UnicodeUTF8));
        vozvrat_post->setText(QApplication::translate("marketClass", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202\321\213 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274", 0, QApplication::UnicodeUTF8));
        prodaja->setText(QApplication::translate("marketClass", "\320\237\321\200\320\276\320\264\320\260\320\266\320\270", 0, QApplication::UnicodeUTF8));
        vozvrat->setText(QApplication::translate("marketClass", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202\321\213", 0, QApplication::UnicodeUTF8));
        kassa->setText(QApplication::translate("marketClass", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\272\320\260\321\201\321\201\321\213", 0, QApplication::UnicodeUTF8));
        viruchka->setText(QApplication::translate("marketClass", "\320\222\321\213\321\200\321\203\321\207\320\272\320\260", 0, QApplication::UnicodeUTF8));
        rashod_kassa->setText(QApplication::translate("marketClass", "\320\240\320\260\321\201\321\205\320\276\320\264\321\213", 0, QApplication::UnicodeUTF8));
        system_settings->setText(QApplication::translate("marketClass", "\320\241\320\270\321\201\321\202\320\265\320\274\321\213", 0, QApplication::UnicodeUTF8));
        workplace_settings->setText(QApplication::translate("marketClass", "\320\240\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\274\320\265\321\201\321\202\320\260", 0, QApplication::UnicodeUTF8));
        print_settings->setText(QApplication::translate("marketClass", "\320\237\320\265\321\207\320\260\321\202\320\270", 0, QApplication::UnicodeUTF8));
        rekvizit->setText(QApplication::translate("marketClass", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213 \321\204\320\270\321\200\320\274\321\213", 0, QApplication::UnicodeUTF8));
        kurs->setText(QApplication::translate("marketClass", "\320\232\321\203\321\200\321\201 \321\200\321\203\320\261\320\273\321\217", 0, QApplication::UnicodeUTF8));
        spravochnik_tovar->setText(QApplication::translate("marketClass", "\320\242\320\276\320\262\320\260\321\200\321\213", 0, QApplication::UnicodeUTF8));
        spravochnik_client->setText(QApplication::translate("marketClass", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8));
        spravochnik_postavshik->setText(QApplication::translate("marketClass", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\270", 0, QApplication::UnicodeUTF8));
        spravochnik_rashod->setText(QApplication::translate("marketClass", "\320\241\321\202\320\260\321\202\321\214\320\270 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", 0, QApplication::UnicodeUTF8));
        print_naklad->setText(QApplication::translate("marketClass", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217", 0, QApplication::UnicodeUTF8));
        print_chek->setText(QApplication::translate("marketClass", "\320\242\320\276\320\262\320\260\321\200\320\275\321\213\320\271 \321\207\320\265\320\272", 0, QApplication::UnicodeUTF8));
        cennik->setText(QApplication::translate("marketClass", "\320\246\320\265\320\275\320\275\320\270\320\272\320\270", 0, QApplication::UnicodeUTF8));
        instruction->setText(QApplication::translate("marketClass", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        about->setText(QApplication::translate("marketClass", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        filtr->setText(QApplication::translate("marketClass", "\320\244\320\270\320\273\321\214\321\202\321\200", 0, QApplication::UnicodeUTF8));
        ext->setText(QApplication::translate("marketClass", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("marketClass", "\320\241\320\272\320\273\320\260\320\264", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("marketClass", "\320\242\320\276\321\200\320\263\320\276\320\262\320\273\321\217", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("marketClass", "\320\224\320\265\320\275\321\214\320\263\320\270", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("marketClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        menu_5->setTitle(QApplication::translate("marketClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\320\270", 0, QApplication::UnicodeUTF8));
        exitApp->setTitle(QApplication::translate("marketClass", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class marketClass: public Ui_marketClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKET_H
