#pragma once
#include "People.h"
#include "qvector.h"
#include "qstring.h"
#include <qfile.h>
#include <qdatastream.h>
class FunctionsPeople
{
public:
	FunctionsPeople(void);
	~FunctionsPeople(void);
	QVector<People> peoples;
	int currentNote;
	int personal_id;
	int whoIt;
	void addPeople(People &temp);
	bool SavePeopleFile(QString filename);
	void editPeople(int index, QString add_people);
	bool LoadPeopleFile(QString filename);
};

