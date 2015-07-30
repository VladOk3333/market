#pragma once
#include "qvector.h"
#include "qstring.h"
#include "products.h"
#include <qfile.h>
#include <qdatastream.h>
class FunctionsProducts
{
public:
	FunctionsProducts(void);
	~FunctionsProducts(void);

	QVector <products> prod;
	int currentNoteProd;

	void addProduct(QString, QString, QString, float, int);
	bool SaveProdFile(QString filename);
	void editProd(int index, QString prodTitle, QString prodCountry, QString prodIzm, float prodNDS, int prodGroup);
	bool LoadProdFile(QString filename);
};

