#ifndef SPRAVTOVAR_H
#define SPRAVTOVAR_H

#include <QDialog>
#include "ui_spravtovar.h"
#include "addgroup.h"
#include "FunctionsProducts.h"

class spravTovar : public QDialog
{
	Q_OBJECT

public:
	spravTovar(FunctionsGroup &object, QWidget *parent = 0);
	~spravTovar();

private:
	Ui::spravTovar ui;
	FunctionsGroup *obj;

private slots:
	void addGroupClicked();
};

#endif // SPRAVTOVAR_H
