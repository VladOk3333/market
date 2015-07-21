#ifndef DELETEGROUPWARNING_H
#define DELETEGROUPWARNING_H

#include <QDialog>
#include "ui_deletegroupwarning.h"

class deleteGroupWarning : public QDialog
{
	Q_OBJECT

public:
	deleteGroupWarning(QWidget *parent = 0);
	~deleteGroupWarning();

private:
	Ui::deleteGroupWarning ui;
};

#endif // DELETEGROUPWARNING_H
