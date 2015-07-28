#include "skladwindow.h"

skladWindow::skladWindow(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.skladWindowExit, SIGNAL(clicked(bool)), this, SLOT(skladWindowExit()));
}

skladWindow::~skladWindow()
{

}

void skladWindow::skladWindowExit()
{
	this->close();
}