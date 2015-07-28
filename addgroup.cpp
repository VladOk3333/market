#include "addgroup.h"

addGroup::addGroup(FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj = &object;
	//localObj.addGroup("kgkjvk");
	//this->close();
	window = new createGroup(*localObj, this);
	//window1 = new sortGroup(*localObj, this);
	connect(ui.addingGroupAdd, SIGNAL(clicked(bool)), this, SLOT(addGroupAdd()));
	connect(ui.addGroupSort, SIGNAL(clicked(bool)), this, SLOT(addGroupSort()));
	connect(ui.addGroupDel, SIGNAL(clicked(bool)), this, SLOT(deleteGroup()));
	connect(ui.addGroupChange, SIGNAL(clicked(bool)), this, SLOT(addGroupIzm()));
	int ggg = connect(window, SIGNAL(update()), this, SLOT(updateTable()));

	showListGroups();
	//addGroupAdd();
	
}

addGroup::~addGroup()
{

}
void addGroup::addGroupAdd()
{
	//window = new createGroup(*localObj, this);
	//window->setWindowFlags(Qt::WindowCloseButtonHint);
	//QString a = str;
	window->show();
	//(*localObj)->addGroup(str);
	
}
void addGroup::addGroupSort()
{
	
	window1 = new sortGroup(*localObj, this);
	//window->setWindowFlags(Qt::WindowCloseButtonHint);
	//QString a = str;
	window1->show();
}
void addGroup::showListGroups()
{
	for(int i=0; i!=localObj->groups.size();i++)
	{
		QListWidgetItem* tmpItem = new QListWidgetItem;
		tmpItem->setText(localObj->groups[i].name);
		ui.listGroups->insertItem(i,tmpItem);

		localObj->currentNote=ui.listGroups->count();
		localObj->currentNote--;
		ui.listGroups->setCurrentRow(localObj->currentNote);
	}
}
void addGroup::updateTable() {
	ui.listGroups->clear();
	showListGroups();

}

void addGroup::deleteGroup()
{
	int prevActiveItem=0;
	if(localObj->groups.count()!=0)
	{
	localObj->groups.remove(ui.listGroups->currentRow());
	
	prevActiveItem=ui.listGroups->currentRow();		
	ui.listGroups->clear();
	showListGroups();


	
	if(localObj->groups.count()!=0)
	{

		if(prevActiveItem==0)
		{
			ui.listGroups->setCurrentRow(prevActiveItem);
			
			int c=0;
		}

		else ui.listGroups->setCurrentRow(prevActiveItem-1);
	}
}

}
void addGroup::addGroupIzm()
{
	
	window2 = new createGroup(localObj->groups[ui.listGroups->currentRow()].name,ui.listGroups->currentRow(),*localObj, this);
	//window->setWindowFlags(Qt::WindowCloseButtonHint);
	//QString a = str;
	window2->show();
}