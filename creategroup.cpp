#include "creategroup.h"

createGroup::createGroup(FunctionsGroup &object,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.OKcreateGroup, SIGNAL(clicked()), this, SLOT(getTitleGroup()));
	connect(ui.CancelCreateGroup, SIGNAL(clicked()), this, SLOT(closeWindow()));
	
	
	obj = &object;
	//str = &str1;
	//*str = "evv";
	//obj->addGroup("jkgjhv");
}

createGroup::~createGroup()
{

}

void createGroup::getTitleGroup()
{
	add_group="";
	add_group+=ui.groupTitle->text();
	obj->addGroup(add_group);
	//int size=obj->groups.size();
	//(*str) = add_group;
	int v=0;
	emit update();
	//return add_group;
	this->close();

}

void createGroup::closeWindow()
{
 //exit(EXIT_SUCCESS);
	 this->close();
}

createGroup::createGroup(QString oldTitle,int id,FunctionsGroup &object,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	obj = &object;
	ui.groupTitle->setText(oldTitle);
	index=id;
	connect(ui.OKcreateGroup, SIGNAL(clicked()), this, SLOT(editionList()));

}

void createGroup::editTitleGroup(int id)
{
	add_group="";
	add_group+=ui.groupTitle->text();
	int v=0;
	//obj->addGroup(add_group); //заменить на редактирование
	obj->editGroup(index, add_group);
	emit update();
	this->close();

}
void createGroup::editionList()
{
	editTitleGroup(index);
	
	
}
