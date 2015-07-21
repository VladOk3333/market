#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H

#include <QDialog>
#include "ui_systemsettings.h"

class systemSettings : public QDialog
{
	Q_OBJECT

public:
	systemSettings(QWidget *parent = 0);
	~systemSettings();

private:
	Ui::systemSettings ui;
};

#endif // SYSTEMSETTINGS_H
