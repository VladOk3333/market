#include "sortgroup.h"


sortGroup::sortGroup(FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	localObj = &object;
	showListGroups();
//	int aaa = connect(window1, SIGNAL(update()), this, SLOT(updateTable()));
	connect(ui.sortGroupUp, SIGNAL(clicked()),this,SLOT(getUpItem()));
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
		
		localObj->currentNote=ui.sortGroupList->count();
		localObj->currentNote--;
		ui.sortGroupList->setCurrentRow(localObj->currentNote);
		
		/*tmpItem=new QListWidgetItem (record_in_browser(rec));
		ui.listGroups->insertItem(row,tmpItem);
		ui.listGroups->item(row)->setData(Qt::UserRole, rec.id);*/
	}
}
void sortGroup::getUpItem()
{
	
	Groups temp;
	int row = ui.sortGroupList->currentRow();
	temp.name=localObj->groups.value(row-1).name;
	if(row-1>=0)
	{
		/*localObj->groups.replace(localObj->currentNote-1, localObj->groups[localObj->currentNote]);
		localObj->groups.replace(localObj->currentNote, temp);
		localObj->currentNote=localObj->currentNote-1;*/

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

}
