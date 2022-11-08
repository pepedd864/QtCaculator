#include "mainWindow.h"
//#include"OtherFunction.h"
#include<QButtonGroup>
#include<QMessageBox>
#include<QDebug>

#define _setFont(n) {font.setPointSize(n);ui->line_2->setFont(font);}
#define _del_A_Num() {ui->line_2->setCursorPosition(ui->line_2->cursorPosition() - 1);ui->line_2->del();}
#define _about_Content "<h1>Windows11 Caculator -QT<\h1>\
<h2> Designed by 4iak<\h2>\
<h2>Github:<\h2><a href = https://github.com/pepedd864?tab=repositories>\
<u>https://github.com/pepedd864?tab=repositories</u>"

int Digit_calc(long long num);
QString* Style_Set(bool n);

mainWindow::mainWindow(QWidget* parent)
	: QWidget(parent)
	, ui(new Ui::mainWindowClass())
{
	ui->setupUi(this);
	iniUi();
	this->setWindowTitle(u8"一个假计算器");
	ui->line_1->setText("");
	ui->line_2->setText("0");
	ui->line_2->setReadOnly(true);
}

mainWindow::~mainWindow()
{
	delete ui;
}

void mainWindow::iniUi()
{
	//将所有按钮放到一个按钮组中
	QButtonGroup* buttongroup = new QButtonGroup(this);
	QList<QPushButton*> btnList = findChildren<QPushButton*>();
	for (QPushButton* btn : btnList)
	{
		buttongroup->addButton(btn);
	}
	//关联按钮点击信号
	//(QButtonGroup返回的信号的函数是重载的，如果用函数指针链接，需要使用：
	//QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked))
	connect(buttongroup, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked), this, &mainWindow::onButtonGroupClicked);
	vec.resize(5);
	//1 + 2 = 3
	//五个操作符
}

void mainWindow::onButtonGroupClicked(QAbstractButton* btn)
{
#if 1
	//获取按钮文本，作为输入信号
	QString In_Signal = btn->text();

	//获取line_1,line_2的文本，用于更新字体大小
	QString extp_1 = ui->line_1->text();
	QString extp_2 = ui->line_2->text();

	//获取line_2的字体
	QFont font = ui->line_2->font();
#endif

#if 1
	if (In_Signal >= '0' && In_Signal <= '9' || In_Signal == ".")
	{
		QString ts = ui->line_2->text();

		if (In_Signal == '.' && ts.back() != '.')
		{
			//判断line_2中是否有 '.',有则不加'.',无则加'.'
			int index = ts.indexOf('.');
			if (index >= 1);
			else ui->line_2->insert(In_Signal);
		}
		else if (In_Signal != '.' && ts != '0')
		{
			//如果上一个按键是<操作符>，则清空line_2,然后输入值
			if (prevbtn == "+")
			{
				vec.clear();
				vec.resize(5);
				ui->line_2->clear();
			}
			ui->line_2->insert(In_Signal);
			qDebug() << num;
			//vec[0] = num;
		}
		else if (ts == '0')
		{
			_del_A_Num();
			ui->line_2->insert(In_Signal);
		}
	}

	if (In_Signal == "CE")
	{
		ui->line_2->clear();
		ui->line_2->setText("0");
		_setFont(32);
	}
	if (In_Signal == "C")
	{
		ui->line_2->clear();
		ui->line_1->clear();
		ui->line_2->setText("0");
		vec.clear();
		vec.resize(5);
		_setFont(32);
	}
	if (In_Signal == "Del")
	{
		QString ts = ui->line_2->text();
		if (ts.length() != 1)
		{
			_del_A_Num();
		}
		else
		{
			ui->line_2->setText("0");
		}
	}
	if (In_Signal == "+")
	{
		vec[1] = "+";

		//ui->line_1->clear();
		//ui->line_2->setText("0");
		//for (auto var : vec)
		//{
		//    //qDebug() << var;
		//    ui->line_1->insert(var.toString());
		//}
	}
	else if (In_Signal == "=" && !vec[0].isNull())
	{
		if (vec[1].isNull())
		{
			vec.clear();
			vec.resize(5);
			vec[0] = num;
			vec[1] = "=";
		}
		else
		{
			vec[2] = num;
			vec[3] = "=";
			if (vec[1] == "+")
			{
				vec[4] = vec[0].toDouble() + vec[2].toDouble();
			}
		}

		ui->line_2->setText(vec[4].toString());
	}
	if (In_Signal == "+" || In_Signal == "-" || In_Signal == "×" || In_Signal == "÷" || In_Signal == "=")
	{
		for (auto var : vec)
		{
			//qdebug() << var;
			ui->line_1->insert(var.toString());
		}
	}
#endif
	//获取上次按钮操作
	prevbtn = In_Signal;
	//qDebug() << vec;
}

//关联line_2内容缩放更新
void mainWindow::on_line_2_textEdited(const QString& arg1)
{
	//获取line_2的文本，用于更新字体大小
	QString extp_2 = ui->line_2->text();

	//获取line_2字符串长度
	int lenth = extp_2.length();

	//获取line_2数字内容
	//判断line_2中是否有逗号，有则删除，无则转换为数字
	QString tmpChar = extp_2;
	//**这个算法**
	while (tmpChar.indexOf(',') != -1)
	{
		int index = tmpChar.indexOf(',');
		tmpChar.remove(index, 1);
	}
	num = tmpChar.toDouble();
	//qDebug() << num;
	//获取line_2的字体
	QFont font = ui->line_2->font();

#if 1
	//根据line_2内容长度修改参数
#if 1
//对字符长度进行判断缩放字体
	if (lenth < 12)
	{
		_setFont(32);
	}
	if (lenth == 12)
	{
		_setFont(30);
	}
	if (lenth == 13)
	{
		_setFont(28);
	}
	if (lenth == 14)
	{
		_setFont(26);
	}
	if (lenth == 15)
	{
		_setFont(25);
	}
	if (lenth == 16)
	{
		_setFont(24);
	}

#endif
	//添加逗号","
#if 1
	QString t = ',';
	int i = Digit_calc((long long)num);

	//if (i>3 && i % 3 == 1 )
	//{
	//    //bool_inserted[n] = 1;
	//    ui->line_2->clear();
	//    ui->line_2->setText(QString::number(num));
	//    ui->line_2->setCursorPosition(1);
	//    ui->line_2->insert(t);
	//    //n++;
	//}

#endif

#endif
}

void mainWindow::on_btn_about_clicked()
{
	QMessageBox messagebox;
	messagebox.setStyleSheet(*Style_Set(0));
	messagebox.setText(QStringLiteral(_about_Content));
	messagebox.setWindowTitle("About");
	messagebox.setIcon(QMessageBox::Information);
	messagebox.exec();
}

//数字位数计算器
int Digit_calc(long long num)
{
	int n;
	for (n = 0; num > 0; n++)
	{
		num /= 10;
	}
	return n;
}
//皮肤更换
QString* Style_Set(bool n)
{
	if (n == 0)
	{
		QFile file(":/res/qss/QMessageBox_Stylesheet_1.qss");
		file.open(QFile::ReadOnly);
		QTextStream fileText(&file);
		static QString stylesheet = fileText.readAll();
		return &stylesheet;
	}
	else
	{
		QFile file(":/res/qss/QMessageBox_Stylesheet_2.qss");
		file.open(QFile::ReadOnly);
		QTextStream fileText(&file);
		static QString stylesheet = fileText.readAll();
		return &stylesheet;
	}
}