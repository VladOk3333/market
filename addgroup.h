#ifndef ADDGROUP_H
#define ADDGROUP_H

#include <QDialog>
#include "ui_addgroup.h"

class addGroup : public QDialog
{
	Q_OBJECT

public:
	addGroup(QWidget *parent = 0);
	~addGroup();

private:
	Ui::addGroup ui;
};

#endif // ADDGROUP_H
