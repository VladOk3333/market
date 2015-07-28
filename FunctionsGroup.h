#pragma once
#include "qvector.h"
#include "Groups.h"
#include "qstring.h"
#include <qfile.h>
#include <qdatastream.h>
class FunctionsGroup
{
public:
	FunctionsGroup(void);
	~FunctionsGroup(void);
	QVector<Groups> groups;
	int currentNote;
	int personal_id;
	void addGroup(QString temp);
	bool SaveGroupFile(QString filename);
	void editGroup(int index, QString add_group);
	bool LoadGroupFile(QString filename);
};

