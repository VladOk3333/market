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

addProduct::addProduct(FunctionsProducts &obj, FunctionsGroup &object,QWidget *parent,QString tempTitle, QString tempCountry,QString tempIzm,float tempNDS,int tempGroups, int id)
	: QDialog(parent)
{
	ui.setupUi(this);
	int a=0;
	ui.addProductName->setText(tempTitle);
	ui.addProductCountry->setText(tempCountry);
	ui.addProductIzm->setText(tempIzm);
	ui.addProductNDS->setValue(tempNDS);
	for(int i=0; i!=object.groups.size();i++)
	{
		ui.addProductGroup->addItem(object.groups[i].name);
	}
	//ui.addProductGroup->addItem(object.groups[tempGroups].name);
	ui.addProductGroup->setCurrentIndex(tempGroups);
	index=id;
	connect(ui.addProductAdd, SIGNAL(clicked()), this, SLOT(editionList()));
	//connect(ui.addProductExit, SIGNAL(clicked()), this, SLOT(ProdExit()));

}

void addProduct::editProduct(int id)
{

	title="";
	country="";
	izm="";
	NDS=0;
	groups=0;
	title+=ui.addProductName->text();
	country+=ui.addProductCountry->text();
	izm+=ui.addProductIzm->text();
	NDS+=ui.addProductNDS->value();
	groups+=ui.addProductGroup->currentIndex();
	int v=0;
	localObj1->editProd(id, title,country,izm,NDS,groups);
	this->close();

}
void addProduct::editionList()
{
	editProduct(index);
	ui.addProductName->clear();
	ui.addProductCountry->clear();
	ui.addProductIzm->clear();
	ui.addProductNDS->clear();
	ui.addProductGroup->clear();
	//emit update();
	
}