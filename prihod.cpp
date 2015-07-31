#include "prihod.h"

Prihod::Prihod(FunctionsViruchka &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj=&object;;
	connect(ui.prihodExit, SIGNAL(clicked(bool)), this, SLOT(showListViruchka()));
	connect(ui.prihodAdd, SIGNAL(clicked(bool)), this, SLOT(addViruchkaAdd()));
	window = new addViruchka(*localObj,this);
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
	window->show();
}
void Prihod::showListViruchka()
{
	int size =localObj->vir.size();
	for(int i=0; i!=localObj->vir.size();i++)
	{
		QTableWidgetItem *item;
		ui.prihodList->insertRow(i);//Добавить строку
		for(int j=0; j<4;j++)
			ui.prihodList->insertColumn(j);
		

	item = new QTableWidgetItem(Record.FIO);
	ui.table_Notations->setItem(insertPos,0, item);//




		tmpItem->setText(localObj->vir[i].date);
		ui.prihodList->setItem(i,tmpItem);

		localObj->currentNote=ui.prihodList->count();
		localObj->currentNote--;
		ui.listGroups->setCurrentRowlocalObj->currentNote);*/
	}
}