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
	connect(ui.viruchka, SIGNAL(triggered(bool)), this, SLOT(viruchkaClicked()));
	connect(ui.spravochnik_client, SIGNAL(triggered(bool)), this, SLOT(clientsClicked()));

	object.LoadGroupFile("groups.mkt");
	object1.LoadProdFile("products.mkt");
	virObj.LoadViruchkaFile("viruchka.mkt");
	peopleObj.LoadPeopleFile("people.mkt");

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
}
/*void market::prihodClicked()
{
	Prihod window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
}*/

void market::vozvratPostavshikClicked()
{
}

void market::productsClicked()
{
	
	spravTovar *window = new spravTovar(object1, object, this);
	
	window->show();
}
void market::clientsClicked()
{
	
	addGroup *window = new addGroup(peopleObj,this);
	
	window->show();
}
void market::viruchkaClicked()
{
	
	Prihod *window = new Prihod(virObj,this);
	
	window->show();
}


void market::closeApp()
{
	 exit (EXIT_SUCCESS);
}

