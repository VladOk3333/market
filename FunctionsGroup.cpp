#include "FunctionsGroup.h"


FunctionsGroup::FunctionsGroup(void)
{
	personal_id=0;	
}


FunctionsGroup::~FunctionsGroup(void)
{
}

void FunctionsGroup::addGroup(QString temp)
{
	Groups tmp;
	tmp.id=0;
	personal_id++;
	tmp.name=temp;
	groups.append(tmp);
}

bool FunctionsGroup::SaveGroupFile(QString filename)
{
	QFile file(filename);
	if(file.open(QIODevice::WriteOnly))
	{
		QDataStream tmp(&file);
		for(int i=0; i<groups.size();i++)
		{
			tmp<<groups[i].id;
			tmp<<groups[i].name;
		}
			return true;
	}
	return false;
}
void FunctionsGroup::editGroup(int index, QString add_group)
{
	Groups temp;
	temp.name=add_group;
	groups.replace(index, temp);
	int v=0;
}