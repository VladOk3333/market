#ifndef DATAPRIHOD_H
#define DATAPRIHOD_H

#include <QDialog>
#include "ui_dataprihod.h"

class dataPrihod : public QDialog
{
	Q_OBJECT

public:
	dataPrihod(QWidget *parent = 0);
	~dataPrihod();

private:
	Ui::dataPrihod ui;
};

#endif // DATAPRIHOD_H
