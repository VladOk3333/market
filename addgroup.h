#ifndef ADDGROUP_H
#define ADDGROUP_H

#include <QDialog>
#include "ui_addgroup.h"
#include "creategroup.h"
#include "FunctionsGroup.h"
#include "FunctionsProducts.h"
#include <qlistwidget.h>
#include "sortgroup.h"

class addGroup : public QDialog
{
	Q_OBJECT

public:
	addGroup(FunctionsGroup &obj, QWidget *parent = 0);
	~addGroup();
	createGroup *window;
	sortGroup *window1;
	createGroup *window2;
private:
	Ui::addGroup ui;

	FunctionsGroup *localObj;

	private slots:
		void addGroupAdd();
		void showListGroups();
		void updateTable();
		void addGroupSort();
		void deleteGroup();
		void addGroupIzm();
		void addGroupExit();
};

#endif // ADDGROUP_H
