#include "mainWindow.h"
#include<stdio.h>
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	QFile UI_Stylesheet_1(":/res/qss/stylesheet_1.qss");
	QFile UI_Stylesheet_2(":/res/qss/stylesheet_2.qss");
	UI_Stylesheet_1.open(QFile::ReadOnly);
	QTextStream fileText(&UI_Stylesheet_1);
	QString stylesheet = fileText.readAll();
	app.setStyleSheet(stylesheet);
	mainWindow w;
	w.show();
	return app.exec();
}