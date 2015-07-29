#include "spravtovar.h"

spravTovar::spravTovar(FunctionsProducts &object2, FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//window1 = new addProduct(*obj1,*obj,this);
	connect(ui.addingGroup, SIGNAL(clicked(bool)), this, SLOT(addGroupClicked()));
	connect(ui.spravTovarExit, SIGNAL(clicked(bool)), this, SLOT(spravTovarExit()));
	connect(ui.spravTovarAdd, SIGNAL(clicked(bool)), this, SLOT(addProductClicked()));
	connect(ui.spravTovarDelete, SIGNAL(clicked(bool)), this, SLOT(deleteTov()));
	connect(ui.spravTovarChange, SIGNAL(clicked(bool)), this, SLOT(addProdIzm()));

	obj = &object;
	obj1=&object2;
	showListProd();
}

spravTovar::~spravTovar()
{

}
void spravTovar::addGroupClicked()
{
	addGroup *window = new addGroup(*obj,this);

	window->show();
}
void spravTovar::addProductClicked()
{

	window = new addProduct(*obj1,*obj,this);
	connect(window, SIGNAL(update()), this, SLOT(updateTable()));
	window->show();
}
void spravTovar::spravTovarExit()
{
	this->close();
}
void spravTovar::showListProd()
{
	int size =obj1->prod.size();
	for(int i=0; i!=obj1->prod.size();i++)
	{
		QListWidgetItem* tmpItem = new QListWidgetItem;
		tmpItem->setText(obj1->prod[i].title);
		ui.spravTovarList->insertItem(i,tmpItem);

		obj1->currentNoteProd=ui.spravTovarList->count();
		obj1->currentNoteProd--;
		ui.spravTovarList->setCurrentRow(obj1->currentNoteProd);
	}
}

void spravTovar::updateTable() {
	ui.spravTovarList->clear();
	showListProd();

}
void spravTovar::deleteTov()
{
	int prevActiveItem=0;
	if(obj1->prod.count()!=0)
	{
	obj1->prod.remove(ui.spravTovarList->currentRow());
	
	prevActiveItem=ui.spravTovarList->currentRow();		
	ui.spravTovarList->clear();
	showListProd();


	
	if(obj1->prod.count()!=0)
	{

		if(prevActiveItem==0)
		{
			ui.spravTovarList->setCurrentRow(prevActiveItem);
			
			int c=0;
		}

		else ui.spravTovarList->setCurrentRow(prevActiveItem-1);
	}
}

}

void spravTovar::addProdIzm()
{
	
	/*if(obj1->prod.size()) window1 = new addProduct(obj1->prod[ui.spravTovarList->currentRow()].title,ui.spravTovarList->currentRow(),*obj, this);
	int upd = connect(window1, SIGNAL(update()), this, SLOT(updateTable()));
	window1->show();*/
	if(obj1->prod.size())window1 = new addProduct(*obj1,*obj,this, obj1->prod[ui.spravTovarList->currentRow()].title, obj1->prod[ui.spravTovarList->currentRow()].country,obj1->prod[ui.spravTovarList->currentRow()].izmer, obj1->prod[ui.spravTovarList->currentRow()].NDS, obj1->prod[ui.spravTovarList->currentRow()].group);
	window1->show();
}
