#ifndef PRIHOD_H
#define PRIHOD_H

#include <QDialog>
#include "ui_prihod.h"
#include "addviruchka.h"

class Prihod : public QDialog
{
	Q_OBJECT

public:
	Prihod(QWidget *parent = 0);
	~Prihod();
	addViruchka *window;

private:
	Ui::Prihod ui;

	private slots:
		void prihodExit();
		void addViruchkaAdd();
};

#endif // PRIHOD_H
