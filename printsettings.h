#ifndef PRINTSETTINGS_H
#define PRINTSETTINGS_H

#include <QDialog>
#include "ui_printsettings.h"

class printSettings : public QDialog
{
	Q_OBJECT

public:
	printSettings(QWidget *parent = 0);
	~printSettings();

private:
	Ui::printSettings ui;
};

#endif // PRINTSETTINGS_H
