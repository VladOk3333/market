#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>
#include "ui_addproduct.h"
#include "FunctionsGroup.h"
#include "FunctionsProducts.h"
#include "products.h"
class addProduct : public QDialog
{
	Q_OBJECT

public:
	addProduct(FunctionsProducts &obj, FunctionsGroup &object, QWidget *parent = 0);
	addProduct::addProduct(FunctionsProducts &obj, FunctionsGroup &object,QWidget *parent,QString tempTitle, QString tempCountry,QString tempIzm,float tempNDS,int tempGroups);
	~addProduct();
	FunctionsGroup *localObj;
	FunctionsProducts *localObj1;

signals:
	void update();

private:
	Ui::addProduct ui;

private slots:
	void addProductAdd();
	void ProdExit();
};

#endif // ADDPRODUCT_H
