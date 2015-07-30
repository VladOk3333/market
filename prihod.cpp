#include "prihod.h"

Prihod::Prihod(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.prihodExit, SIGNAL(clicked(bool)), this, SLOT(prihodExit()));
	connect(ui.prihodAdd, SIGNAL(clicked(bool)), this, SLOT(addViruchkaAdd()));
	window = new addViruchka(this);
}

Prihod::~Prihod()
{

}
void Prihod::prihodExit()
{
	this->close();
}
void Prihod::addViruchkaAdd()
{
	
	window->show();
}