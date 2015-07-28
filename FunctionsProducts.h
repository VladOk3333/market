#pragma once
#include "qvector.h"
#include "qstring.h"
#include "products.h"
class FunctionsProducts
{
public:
	FunctionsProducts(void);
	~FunctionsProducts(void);
	QVector<products> prod;
	int currentNoteProd;

	void addProduct(QString, QString, QString, float, int);
};

