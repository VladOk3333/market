#include "sortgroup.h"


sortGroup::sortGroup(FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj = &object;
	showListGroups();
	connect(ui.sortGroupUp, SIGNAL(clicked()),this,SLOT(getUpItem()));
	connect(ui.sortGroupDown, SIGNAL(clicked()),this,SLOT(getDownItem()));
	connect(ui.sortGroupExit, SIGNAL(clicked()),this,SLOT(ExitWindow()));
}

sortGroup::~sortGroup()
{
	
}
void sortGroup::showListGroups()
{
	for(int i=0; i!=localObj->groups.size();i++)
	{
		QListWidgetItem* tmpItem = new QListWidgetItem;
		tmpItem->setText(localObj->groups[i].name);
		ui.sortGroupList->insertItem(i,tmpItem);
	}
		localObj->currentNote=ui.sortGroupList->count();
		localObj->currentNote--;
		ui.sortGroupList->setCurrentRow(localObj->currentNote);
	
}
void sortGroup::getUpItem()
{
	
	Groups temp;
	int row = ui.sortGroupList->currentRow();
	temp.name=localObj->groups.value(row-1).name;
	if(row-1>=0)
	{
		localObj->groups.replace(row-1, localObj->groups[row]);
		localObj->groups.replace(row, temp);
		int lol=localObj->currentNote;
		ui.sortGroupList->clear();
		showListGroups();
		localObj->currentNote=row-1;
		ui.sortGroupList->setCurrentRow(localObj->currentNote);
	}
	int v=0;
}

void sortGroup::getDownItem()
{
	Groups temp;
	int row = ui.sortGroupList->currentRow();
	temp.name=localObj->groups.value(row+1).name;
	if(row!=localObj->currentNote || localObj->currentNote==0 )
	{
		localObj->groups.replace(row+1, localObj->groups[row]);
		localObj->groups.replace(row, temp);

		int lol=localObj->currentNote;
		
		
		ui.sortGroupList->clear();
		showListGroups();
		localObj->currentNote=row+1;
		ui.sortGroupList->setCurrentRow(localObj->currentNote);
	}
	
}

void sortGroup::ExitWindow()
{
	emit update();
	this->close();
}