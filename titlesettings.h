#ifndef TITLESETTINGS_H
#define TITLESETTINGS_H

#include <QDialog>
#include "ui_titlesettings.h"

class titleSettings : public QDialog
{
	Q_OBJECT

public:
	titleSettings(QWidget *parent = 0);
	~titleSettings();

private:
	Ui::titleSettings ui;
};

#endif // TITLESETTINGS_H
