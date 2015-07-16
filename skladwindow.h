#ifndef SKLADWINDOW_H
#define SKLADWINDOW_H

#include <QDialog>
#include "ui_skladwindow.h"

class skladWindow : public QDialog
{
	Q_OBJECT

public:
	skladWindow(QWidget *parent = 0);
	~skladWindow();

private:
	Ui::skladWindow ui;
};

#endif // SKLADWINDOW_H
