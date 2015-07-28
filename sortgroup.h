#ifndef SORTGROUP_H
#define SORTGROUP_H

#include <QDialog>
#include "ui_sortgroup.h"
#include "FunctionsGroup.h"
#include "FunctionsGroup.h"
#include "FunctionsProducts.h"
#include <qlistwidget.h>


class sortGroup : public QDialog
{
	Q_OBJECT

public:
	sortGroup(FunctionsGroup &object, QWidget *parent = 0);
	~sortGroup();
	FunctionsGroup *localObj;
	signals:
	void update();
public slots:
	void showListGroups();
	void getDownItem();
	void getUpItem();
	void ExitWindow();

private:
	Ui::sortGroup ui;
};

#endif // SORTGROUP_H
