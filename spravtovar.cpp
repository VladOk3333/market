#include "spravtovar.h"

spravTovar::spravTovar(FunctionsProducts &object2, FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.addingGroup, SIGNAL(clicked(bool)), this, SLOT(addGroupClicked()));
	connect(ui.spravTovarExit, SIGNAL(clicked(bool)), this, SLOT(spravTovarExit()));
	connect(ui.spravTovarAdd, SIGNAL(clicked(bool)), this, SLOT(addProductClicked()));

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
