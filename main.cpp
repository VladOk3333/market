#include "market.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	market w;
	w.show();
	return a.exec();
}
