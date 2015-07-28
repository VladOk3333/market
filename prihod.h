#ifndef PRIHOD_H
#define PRIHOD_H

#include <QDialog>
#include "ui_prihod.h"

class Prihod : public QDialog
{
	Q_OBJECT

public:
	Prihod(QWidget *parent = 0);
	~Prihod();

private:
	Ui::Prihod ui;

	private slots:
		void prihodExit();
};

#endif // PRIHOD_H
