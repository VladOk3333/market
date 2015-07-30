#include "addgroup.h"

addGroup::addGroup(FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj = &object;
	window = new createGroup(*localObj, this);
	window2 = new createGroup(*localObj, this);
	connect(ui.addingGroupAdd, SIGNAL(clicked(bool)), this, SLOT(addGroupAdd()));
	connect(ui.addGroupSort, SIGNAL(clicked(bool)), this, SLOT(addGroupSort()));
	connect(ui.addGroupDel, SIGNAL(clicked(bool)), this, SLOT(deleteGroup()));
	connect(ui.addGroupExit, SIGNAL(clicked(bool)), this, SLOT(addGroupExit()));
	connect(ui.addGroupChange, SIGNAL(clicked(bool)), this, SLOT(addGroupIzm()));
	int ggg = connect(window, SIGNAL(update()), this, SLOT(updateTable()));
	localObj->LoadGroupFile("groups.mkt");
	localObj->groups;
	ui.listGroups->clear();
	showListGroups();
}

addGroup::~addGroup()
{

}
void addGroup::addGroupAdd()
{
	window->show();
	
}
void addGroup::addGroupSort()
{
	
	window1 = new sortGroup(*localObj, this);
	int upd2 = connect(window1, SIGNAL(update()), this, SLOT(updateTable()));
	window1->show();
}
void addGroup::showListGroups()
{
	int size =localObj->groups.size();
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
	
	if(localObj->groups.size()) window2 = new createGroup(localObj->groups[ui.listGroups->currentRow()].name,ui.listGroups->currentRow(),*localObj, this);
	int upd = connect(window2, SIGNAL(update()), this, SLOT(updateTable()));
	window2->show();
}
void addGroup::addGroupExit()
{
	localObj->SaveGroupFile("groups.mkt");
	this->close();
}


//clients
addGroup::addGroup(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}