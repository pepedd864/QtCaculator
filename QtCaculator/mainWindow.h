#pragma once

#include <QtWidgets/QWidget>
#include "ui_mainWindow.h"
#include<QVector>
#include<QFile>
#include<QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class mainWindowClass; };
QT_END_NAMESPACE

//int UI_Skin = 0;

class mainWindow : public QWidget
{
	Q_OBJECT

public:
	mainWindow(QWidget* parent = nullptr);
	~mainWindow();
	void iniUi();
public slots:
	void on_line_2_textEdited(const QString& arg1);
	void onButtonGroupClicked(QAbstractButton* btn);
	void on_btn_about_clicked();

private:
	Ui::mainWindowClass* ui = new Ui::mainWindowClass;
	QVector<QVariant> vec;
	QString prevbtn;
	double num = 0;
};
