#ifndef PRIHOD_H
#define PRIHOD_H

#include <QDialog>
#include "ui_prihod.h"
#include "addviruchka.h"
#include "FunctionsViruchka.h"
#include "viruchka.h"

class Prihod : public QDialog
{
	Q_OBJECT

public:
	Prihod(FunctionsViruchka &object, QWidget *parent = 0);
	~Prihod();
	addViruchka *window;
	FunctionsViruchka *localObj;

private:
	Ui::Prihod ui;

	private slots:
		void prihodExit();
		void addViruchkaAdd();
		void showListViruchka();
};

#endif // PRIHOD_H
