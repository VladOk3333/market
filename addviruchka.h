#ifndef ADDVIRUCHKA_H
#define ADDVIRUCHKA_H

#include <QDialog>
#include "ui_addviruchka.h"

class addViruchka : public QDialog
{
	Q_OBJECT

public:
	addViruchka(QWidget *parent = 0);
	~addViruchka();

private:
	Ui::addViruchka ui;
};

#endif // ADDVIRUCHKA_H
