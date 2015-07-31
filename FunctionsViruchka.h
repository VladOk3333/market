#pragma once
#include "viruchka.h"
#include <qvector.h>
#include <qfile.h>
#include <qdatastream.h>

class FunctionsViruchka
{
public:
	FunctionsViruchka(void);
	~FunctionsViruchka(void);

	QVector<viruchka> vir;
	int currentNote;

	void addVir(viruchka &temp);
	bool SaveViruchkaFile(QString filename);
	bool LoadViruchkaFile(QString filename);
};

