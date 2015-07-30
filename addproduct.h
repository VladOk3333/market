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
	addProduct::addProduct(FunctionsProducts &obj, FunctionsGroup &object,QWidget *parent,QString tempTitle, QString tempCountry,QString tempIzm,float tempNDS,int tempGroups, int id);
	~addProduct();
	FunctionsGroup *localObj;
	FunctionsProducts *localObj1;
	QString title;
	QString country;
	QString izm;
	float NDS;
	int groups;
	int index;

signals:
	void update();

private:
	Ui::addProduct ui;

private slots:
	void addProductAdd();
	void ProdExit();
	void editProduct(int);
	void editionList();

};

#endif // ADDPRODUCT_H
