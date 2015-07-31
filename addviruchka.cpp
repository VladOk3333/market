#include "addviruchka.h"

addViruchka::addViruchka(FunctionsViruchka &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj = &object;
	connect(ui.virOk, SIGNAL(clicked()), this, SLOT(addingViruchkaAdd()));
}

addViruchka::~addViruchka()
{

}

void addViruchka::addingViruchkaAdd()
{
	
	viruchka temp;
	temp.date=(ui.virData->date().toString());
	temp.DLC=ui.virDLC->text();
	temp.kurs=ui.virKurs->value();
	temp.summD=ui.virDol->value();
	temp.summR=ui.virRub->value();
	
	localObj->addVir(temp);
}