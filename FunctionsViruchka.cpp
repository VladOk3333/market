#include "FunctionsViruchka.h"


FunctionsViruchka::FunctionsViruchka(void)
{
}


FunctionsViruchka::~FunctionsViruchka(void)
{
}

void FunctionsViruchka::addVir(viruchka &temp)
{
	vir.append(temp);
}

bool FunctionsViruchka::SaveViruchkaFile(QString filename)
{
	QFile file(filename);
	if(file.open(QIODevice::WriteOnly))
	{
		QDataStream tmp(&file);
		if(vir.size())tmp<<vir.size();
		for(int i=0; i<vir.size();i++)
		{
			tmp<<vir[i].date;
			tmp<<vir[i].DLC;
			tmp<<vir[i].kurs;
			tmp<<vir[i].summD;
			tmp<<vir[i].summR;
		}
			return true;
	}
	return false;
}

bool FunctionsViruchka::LoadViruchkaFile(QString filename)
{

	QFile file(filename);
	viruchka temp;
	if(file.open(QIODevice::ReadOnly))
	{
		QDataStream tmp(&file);
		int j=0;
		tmp>>j;

		if(j){
		for(int i=0; i<j;i++)
		{
			
			tmp>>temp.date;
			tmp>>temp.DLC;
			tmp>>temp.kurs;
			tmp>>temp.summD;
			tmp>>temp.summR;
			vir.append(temp);
			int k=0;
		}
		}
			return true;
	}
	return false;

	
}