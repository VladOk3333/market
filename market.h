#ifndef MARKET_H
#define MARKET_H

#include <QtGui/QMainWindow>
#include "ui_market.h"

class market : public QMainWindow
{
	Q_OBJECT

public:
	market(QWidget *parent = 0, Qt::WFlags flags = 0);
	~market();

private:
	Ui::marketClass ui;
};

#endif // MARKET_H
