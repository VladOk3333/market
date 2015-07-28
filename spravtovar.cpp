#include "spravtovar.h"

spravTovar::spravTovar(FunctionsGroup &object, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.addingGroup, SIGNAL(clicked(bool)), this, SLOT(addGroupClicked()));

	obj = &object;
}

spravTovar::~spravTovar()
{

}
void spravTovar::addGroupClicked()
{
	/*addGroup *window;
	window->setWindowFlags(Qt::WindowCloseButtonHint);
	window->exec();*/
	addGroup *window = new addGroup(*obj,this);
//	window->setWindowFlags(Qt::WindowCloseButtonHint);
	window->show();
}
