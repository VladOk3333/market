#ifndef SORTGROUP_H
#define SORTGROUP_H

#include <QDialog>
#include "ui_sortgroup.h"

class sortGroup : public QDialog
{
	Q_OBJECT

public:
	sortGroup(QWidget *parent = 0);
	~sortGroup();

private:
	Ui::sortGroup ui;
};

#endif // SORTGROUP_H
