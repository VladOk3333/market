#include "creategroup.h"

createGroup::createGroup(FunctionsGroup &object,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.groupTitle->clear();
	connect(ui.OKcreateGroup, SIGNAL(clicked()), this, SLOT(getTitleGroup()));
	connect(ui.CancelCreateGroup, SIGNAL(clicked()), this, SLOT(closeWindow()));
	
	ui.groupTitle->clear();
	obj = &object;
}

createGroup::~createGroup()
{

}

void createGroup::getTitleGroup()
{
	add_group="";
	add_group+=ui.groupTitle->text();
	obj->addGroup(add_group);
	ui.groupTitle->clear();
	int v=0;
	emit update();
	this->close();

}

void createGroup::closeWindow()
{
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
	connect(ui.CancelCreateGroup, SIGNAL(clicked()), this, SLOT(closeWindow()));


}

void createGroup::editTitleGroup(int id)
{

	add_group="";
	add_group+=ui.groupTitle->text();
	int v=0;
	obj->editGroup(index, add_group);
	this->close();

}
void createGroup::editionList()
{
	editTitleGroup(index);
	ui.groupTitle->clear();
	emit update();
	
}
