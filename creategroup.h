#ifndef CREATEGROUP_H
#define CREATEGROUP_H

#include <QDialog>
#include "ui_creategroup.h"

class createGroup : public QDialog
{
	Q_OBJECT

public:
	createGroup(QWidget *parent = 0);
	~createGroup();

private:
	Ui::createGroup ui;
};

#endif // CREATEGROUP_H
