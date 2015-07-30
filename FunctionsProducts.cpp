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
bool FunctionsProducts::SaveProdFile(QString filename)
{
	QFile file(filename);
	if(file.open(QIODevice::WriteOnly))
	{
		QDataStream tmp(&file);
		if(prod.size())tmp<<prod.size();
		for(int i=0; i<prod.size();i++)
		{
			tmp<<prod[i].title;
			tmp<<prod[i].country;
			tmp<<prod[i].izmer;
			tmp<<prod[i].NDS;
			tmp<<prod[i].group;
			int v=0;
		}
			return true;
	}
	return false;
}

void FunctionsProducts::editProd(int index, QString prodTitle, QString prodCountry, QString prodIzm, float prodNDS, int prodGroup)
{
	products temp;
	temp.title=prodTitle;
	temp.country=prodCountry;
	temp.izmer=prodIzm;
	temp.NDS=prodNDS;
	temp.group=prodGroup;
	prod.replace(index, temp);
	int v=0;
}

bool FunctionsProducts::LoadProdFile(QString filename)
{

	QFile file(filename);
	products temp;
	if(file.open(QIODevice::ReadOnly))
	{
		QDataStream tmp(&file);
		int j=0;
		tmp>>j;

		if(j){
		for(int i=0; i<j;i++)
		{
			
			tmp>>temp.title;
			tmp>>temp.country;
			tmp>>temp.izmer;
			tmp>>temp.NDS;
			tmp>>temp.group;
			prod.append(temp);
			int k=0;
		}
		}
			return true;
	}
	return false;
}