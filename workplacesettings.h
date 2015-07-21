#ifndef WORKPLACESETTINGS_H
#define WORKPLACESETTINGS_H

#include <QDialog>
#include "ui_workplacesettings.h"

class workplaceSettings : public QDialog
{
	Q_OBJECT

public:
	workplaceSettings(QWidget *parent = 0);
	~workplaceSettings();

private:
	Ui::workplaceSettings ui;
};

#endif // WORKPLACESETTINGS_H
