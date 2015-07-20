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

class market : public QMainWindow
{
	Q_OBJECT

public:
	market(QWidget *parent = 0, Qt::WFlags flags = 0);
	~market();

private slots:
	void sostoyanieClicked();
	void prihodClicked();
	void vozvratPostavshikClicked();
	void closeApp();

private:
	Ui::marketClass ui;
	//skladWindow *window;
};

#endif // MARKET_H
