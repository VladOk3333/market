#ifndef COURSERUBL_H
#define COURSERUBL_H

#include <QDialog>
#include "ui_courserubl.h"

class courseRubl : public QDialog
{
	Q_OBJECT

public:
	courseRubl(QWidget *parent = 0);
	~courseRubl();

private:
	Ui::courseRubl ui;
};

#endif // COURSERUBL_H
