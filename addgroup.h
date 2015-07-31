#ifndef ADDGROUP_H
#define ADDGROUP_H

#include <QDialog>
#include "ui_addgroup.h"
#include "creategroup.h"
#include "FunctionsGroup.h"
#include "FunctionsProducts.h"
#include "FunctionsPeople.h"
#include "addpeople.h"
#include <qlistwidget.h>
#include "sortgroup.h"

class addGroup : public QDialog
{
	Q_OBJECT

public:
	addGroup(FunctionsGroup &obj, QWidget *parent = 0);
	addGroup::addGroup(FunctionsPeople &peopleObj,QWidget *parent=0);
	~addGroup();
	createGroup *window;
	sortGroup *window1;
	createGroup *window2;
	addPeople *window3;
private:
	Ui::addGroup ui;

	FunctionsGroup *localObj;
	FunctionsPeople *peopleObj1;

	private slots:
		void addGroupAdd();
		void showListGroups();
		void updateTable();
		void addGroupSort();
		void deleteGroup();
		void addGroupIzm();
		void addGroupExit();
		void addClientAdd();
		void showListPeople();
		void addPeopleExit();
		void updateTablePeople();
		void deletePeople();
};

#endif // ADDGROUP_H
