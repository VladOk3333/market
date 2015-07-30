#include "FunctionsPeople.h"


FunctionsPeople::FunctionsPeople(void)
{
}


FunctionsPeople::~FunctionsPeople(void)
{
}

void FunctionsPeople::addPeople(People &temp)
{
	peoples.append(temp);
}

bool FunctionsPeople::SavePeopleFile(QString filename)
{
	QFile file(filename);
	if(file.open(QIODevice::WriteOnly))
	{
		QDataStream tmp(&file);
		if(peoples.size())tmp<<peoples.size();
		for(int i=0; i<peoples.size();i++)
		{
			tmp<<peoples[i].peopleAddon;
			tmp<<peoples[i].peopleBank;
			tmp<<peoples[i].peopleBIK;
			tmp<<peoples[i].peopleBuh;
			tmp<<peoples[i].peopleContact;
			tmp<<peoples[i].peopleDirector;
			tmp<<peoples[i].peopleFactAddr;
			tmp<<peoples[i].peopleFax;
			tmp<<peoples[i].peopleFullName;
			tmp<<peoples[i].peopleGruz;
			tmp<<peoples[i].peopleINN;
			tmp<<peoples[i].peopleKorSchet;
			tmp<<peoples[i].peopleKPP;
			tmp<<peoples[i].peopleMail;
			tmp<<peoples[i].peopleMetro;
			tmp<<peoples[i].peopleName;
			tmp<<peoples[i].peopleOKPO;
			tmp<<peoples[i].peopleOKVED;
			tmp<<peoples[i].peoplePhones;
			tmp<<peoples[i].peopleSchet;
			tmp<<peoples[i].peopleUrAddr;
		}
			return true;
	}
	return false;
}