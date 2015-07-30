#ifndef MARKET_H
#define MARKET_H

#include <QtGui/QMainWindow>
#include "ui_market.h"
#include "skladwindow.h"
#include "prihod.h"
#include "vozvratpostavshik.h"
#include "stdlib.h"
#include <cstdio>
#include <cstdlib>
#include "spravtovar.h"
#include "FunctionsGroup.h"
#include "FunctionsProducts.h"
#include "company.h"
#include "FunctionsPeople.h"
class market : public QMainWindow
{
	Q_OBJECT

public:
	market(QWidget *parent = 0, Qt::WFlags flags = 0);
	~market();
	FunctionsGroup object;
	FunctionsProducts object1;
	FunctionsPeople peopleObj;


private slots:
	void sostoyanieClicked();
	void prihodClicked();
	void vozvratPostavshikClicked();
	void closeApp();
	void productsClicked();
	void rekvizitClicked();
	void clientsClicked();
	void viruchkaClicked();

private:
	Ui::marketClass ui;
	FunctionsGroup obj;  
};

#endif // MARKET_H
