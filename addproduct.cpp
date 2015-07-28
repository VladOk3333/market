#include "addproduct.h"

addProduct::addProduct(FunctionsProducts &obj, FunctionsGroup &object,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj=&object;
	localObj1=&obj;
	connect(ui.addProductAdd, SIGNAL(clicked()), this, SLOT(addProductAdd()));
	connect(ui.addProductExit, SIGNAL(clicked()), this, SLOT(ProdExit()));
	for(int i=0; i!=localObj->groups.size();i++)
	{
		ui.addProductGroup->addItem(localObj->groups[i].name);
	}
}

addProduct::~addProduct()
{

}

void addProduct::addProductAdd()
{
	QString tempTitle;
	QString tempCountry;
	QString tempIzm;
	float tempNDS;
	int tempGroups;
	tempTitle=ui.addProductName->text();
	tempCountry=ui.addProductCountry->text();
	tempIzm=ui.addProductIzm->text();
	tempNDS=ui.addProductNDS->value();
	tempGroups=ui.addProductGroup->currentIndex();
    localObj1->addProduct(tempTitle,tempCountry,tempIzm,tempNDS,tempGroups);
	int v=0;
	emit update();
	this->close();


}
void addProduct::ProdExit()
{
	this->close();
}