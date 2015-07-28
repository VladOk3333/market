#include "market.h"



market::market(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.sostoyanie, SIGNAL(triggered(bool)), this, SLOT(sostoyanieClicked()));
	connect(ui.prihod, SIGNAL(triggered(bool)), this, SLOT(prihodClicked()));
	connect(ui.vozvrat_post, SIGNAL(triggered(bool)), this, SLOT(vozvratPostavshikClicked()));
	connect(ui.exitApp, SIGNAL(	aboutToShow ()), this, SLOT(closeApp()));
	connect(ui.spravochnik_tovar, SIGNAL(triggered(bool)), this, SLOT(productsClicked()));
	connect(ui.rekvizit, SIGNAL(triggered(bool)), this, SLOT(rekvizitClicked()));

}

market::~market()
{

}

void market::rekvizitClicked()
{
	Company window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
}
void market::sostoyanieClicked()
{
	skladWindow window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
	//window = new skladWindow(this);
	//window->show();
}
void market::prihodClicked()
{
	Prihod window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
}

void market::vozvratPostavshikClicked()
{
	Prihod window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
}

void market::productsClicked()
{
	
	spravTovar *window = new spravTovar(object, this);
	window->show();
}

void market::closeApp()
{
	 exit (EXIT_SUCCESS);
}