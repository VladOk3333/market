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