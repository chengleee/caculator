#include "caculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	caculator w;
	w.show();
	return a.exec();
}
