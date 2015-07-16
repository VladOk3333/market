#ifndef SKLAD_WINDOW_H
#define SKLAD_WINDOW_H

#include <QWidget>
#include "ui_sklad_window.h"

class sklad_window : public QWidget
{
	Q_OBJECT

public:
	sklad_window(QWidget *parent = 0);
	~sklad_window();

private:
	Ui::sklad_window ui;
};

#endif // SKLAD_WINDOW_H
