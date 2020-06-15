#include "AutoCarSimClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AutoCarSimClient w;
	w.show();
	return a.exec();
}
