#include "FunctionsProducts.h"


FunctionsProducts::FunctionsProducts(void)
{
}


FunctionsProducts::~FunctionsProducts(void)
{
}

void FunctionsProducts::addProduct(QString prodTitle, QString prodCountry, QString prodIzm, float prodNDS, int prodGroup)
{
	products tmp;
	QVector<products> dddd;
	tmp.title=prodTitle;
	tmp.country=prodCountry;
	tmp.izmer=prodIzm;
	tmp.group=prodGroup;
	tmp.NDS=prodNDS;
	prod.append(tmp);
	int aa=0;

}
