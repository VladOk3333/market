#include "prihod.h"

Prihod::Prihod(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.prihodExit, SIGNAL(clicked(bool)), this, SLOT(prihodExit()));
}

Prihod::~Prihod()
{

}
void Prihod::prihodExit()
{
	this->close();
}