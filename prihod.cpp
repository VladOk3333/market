#include "prihod.h"

Prihod::Prihod(FunctionsViruchka &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj=&object;;
	connect(ui.prihodExit, SIGNAL(clicked(bool)), this, SLOT(prihodExit()));
	connect(ui.prihodAdd, SIGNAL(clicked(bool)), this, SLOT(addViruchkaAdd()));
	window = new addViruchka(*localObj,this);
	//int upd2 = connect(window, SIGNAL(update()), this, SLOT(updateTableWidget()));
	showListViruchka();
}

Prihod::~Prihod()
{

}
void Prihod::prihodExit()
{
	localObj->SaveViruchkaFile("viruchka.mkt");
	this->close();
}
void Prihod::addViruchkaAdd()
{
	int upd2 = connect(window, SIGNAL(update()), this, SLOT(updateTableWidget()));
	window->show();
}
void Prihod::showListViruchka()
{
	int size =localObj->vir.size();
	for(int i=0; i!=localObj->vir.size();i++)
	{
		QTableWidgetItem *item;
		ui.prihodList->insertRow(i);
		
		QString floatToStr;
		item = new QTableWidgetItem(localObj->vir[i].date);
		ui.prihodList->setItem(i,0, item);//
		item = new QTableWidgetItem(localObj->vir[i].DLC);
		ui.prihodList->setItem(i,1, item);//
		item = new QTableWidgetItem(floatToStr.setNum(localObj->vir[i].summR));
		ui.prihodList->setItem(i,2, item);//
		item = new QTableWidgetItem(floatToStr.setNum(localObj->vir[i].summD));
		ui.prihodList->setItem(i,3, item);//
	}
		localObj->currentNote=ui.prihodList->rowCount();
		localObj->currentNote--;
		ui.prihodList->setCurrentCell(localObj->currentNote,0);
}

void Prihod::updateTableWidget() {
	ui.prihodList->clear();
	showListViruchka();

}