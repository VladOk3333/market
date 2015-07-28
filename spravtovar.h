#ifndef SPRAVTOVAR_H
#define SPRAVTOVAR_H

#include <QDialog>
#include "ui_spravtovar.h"
#include "addgroup.h"
#include "FunctionsProducts.h"
#include "addproduct.h"

class spravTovar : public QDialog
{
	Q_OBJECT

public:
	spravTovar(FunctionsProducts &object2, FunctionsGroup &object, QWidget *parent = 0);
	~spravTovar();

private:
	Ui::spravTovar ui;
	FunctionsGroup *obj;
	FunctionsProducts *obj1;
	addProduct *window;

private slots:
	void addGroupClicked();
	void spravTovarExit();
	void addProductClicked();
	void showListProd();
	void updateTable();
};

#endif // SPRAVTOVAR_H
