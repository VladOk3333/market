#ifndef CREATEGROUP_H
#define CREATEGROUP_H

#include <QDialog>
#include "ui_creategroup.h"
#include "stdlib.h"
#include <cstdio>
#include <cstdlib>
#include <QWorkspace>
#include "FunctionsGroup.h"

class createGroup : public QDialog
{
	Q_OBJECT
		
public:
	createGroup(FunctionsGroup &object, QWidget *parent = 0);
	createGroup(QString oldTitle, int id, FunctionsGroup &object,QWidget *parent = 0);
	~createGroup();
	QString add_group;
	int index;
signals:
	void update();
private:
	Ui::createGroup ui;
	FunctionsGroup *obj;
	QString *str;

private slots:
	void getTitleGroup();
	void closeWindow();
	void editTitleGroup(int id);
	void editionList();
	
};

#endif // CREATEGROUP_H
