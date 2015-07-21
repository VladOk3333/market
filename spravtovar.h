#ifndef SPRAVTOVAR_H
#define SPRAVTOVAR_H

#include <QDialog>
#include "ui_spravtovar.h"

class spravTovar : public QDialog
{
	Q_OBJECT

public:
	spravTovar(QWidget *parent = 0);
	~spravTovar();

private:
	Ui::spravTovar ui;
};

#endif // SPRAVTOVAR_H
