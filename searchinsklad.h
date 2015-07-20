#ifndef SEARCHINSKLAD_H
#define SEARCHINSKLAD_H

#include <QDialog>
#include "ui_searchinsklad.h"

class SearchInSklad : public QDialog
{
	Q_OBJECT

public:
	SearchInSklad(QWidget *parent = 0);
	~SearchInSklad();

private:
	Ui::SearchInSklad ui;
};

#endif // SEARCHINSKLAD_H
