#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>
#include "ui_addproduct.h"

class addProduct : public QDialog
{
	Q_OBJECT

public:
	addProduct(QWidget *parent = 0);
	~addProduct();

private:
	Ui::addProduct ui;
};

#endif // ADDPRODUCT_H
