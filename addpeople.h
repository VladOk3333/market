#ifndef ADDPEOPLE_H
#define ADDPEOPLE_H

#include <QDialog>
#include "ui_addpeople.h"
#include "People.h"
#include "FunctionsPeople.h"

class addPeople : public QDialog
{
	Q_OBJECT

public:
	addPeople(FunctionsPeople &object, QWidget *parent = 0);
	~addPeople();
	FunctionsPeople *localObj;
	private slots:
		void addPeopleAdd();
signals:
		void update();

private:
	Ui::addPeople ui;
};

#endif // ADDPEOPLE_H
