#ifndef ADDVIRUCHKA_H
#define ADDVIRUCHKA_H

#include <QDialog>
#include "ui_addviruchka.h"
#include "FunctionsViruchka.h"
#include <qdatetime.h>

class addViruchka : public QDialog
{
	Q_OBJECT

public:
	addViruchka(FunctionsViruchka &object, QWidget *parent = 0);
	~addViruchka();
	FunctionsViruchka *localObj;

signals:
	void update();

private:
	Ui::addViruchka ui;

private slots:
	void addingViruchkaAdd();
};

#endif // ADDVIRUCHKA_H
