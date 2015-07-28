#ifndef COMPANY_H
#define COMPANY_H

#include <QDialog>
#include "ui_company.h"
#include <qfile.h>
#include <qdatastream.h>

class Company : public QDialog
{
	Q_OBJECT

public:
	Company(QWidget *parent = 0);
	~Company();
	bool dataChange;
private:
	Ui::Company ui;
private slots:
	bool SaveInFile(QString filename);
	bool LoadInFile(QString filename);
	void dataSave();
	void changeEnabled(bool change);
	void dataEdit();
	void cancel();

};

#endif // COMPANY_H
