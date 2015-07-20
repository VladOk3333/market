#ifndef DOCUMPRIHOD_H
#define DOCUMPRIHOD_H

#include <QDialog>
#include "ui_documprihod.h"

class documPrihod : public QDialog
{
	Q_OBJECT

public:
	documPrihod(QWidget *parent = 0);
	~documPrihod();

private:
	Ui::documPrihod ui;
};

#endif // DOCUMPRIHOD_H
