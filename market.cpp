#include "market.h"


market::market(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.statusAction, SIGNAL(triggered(bool)), this, SLOT(statusActionClicked()));

}

market::~market()
{

}

void market::statusActionClicked()
{
	skladWindow window;
	window.setWindowFlags(Qt::WindowCloseButtonHint);
	window.exec();
	//window = new skladWindow(this);
	//window->show();
}
