#include "caculator.h"

caculator::caculator(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(this->ui.btn_0, SIGNAL(clicked(bool)), this, SLOT(getBtn0()));
	connect(this->ui.btn_1, SIGNAL(clicked(bool)), this, SLOT(getBtn1()));
	connect(this->ui.btn_2, SIGNAL(clicked(bool)), this, SLOT(getBtn2())); 
	connect(this->ui.btn_3, SIGNAL(clicked(bool)), this, SLOT(getBtn3()));
	connect(this->ui.btn_4, SIGNAL(clicked(bool)), this, SLOT(getBtn4()));
	connect(this->ui.btn_5, SIGNAL(clicked(bool)), this, SLOT(getBtn5()));
	connect(this->ui.btn_6, SIGNAL(clicked(bool)), this, SLOT(getBtn6()));
	connect(this->ui.btn_7, SIGNAL(clicked(bool)), this, SLOT(getBtn7()));
	connect(this->ui.btn_8, SIGNAL(clicked(bool)), this, SLOT(getBtn8()));
	connect(this->ui.btn_9, SIGNAL(clicked(bool)), this, SLOT(getBtn9()));
	connect(this->ui.btn_add, SIGNAL(clicked(bool)), this, SLOT(setBtn_add()));
	connect(this->ui.btn_sub, SIGNAL(clicked(bool)), this, SLOT(setBtn_sub()));
	connect(this->ui.btn_mul, SIGNAL(clicked(bool)), this, SLOT(setBtn_mul()));
	connect(this->ui.btn_div, SIGNAL(clicked(bool)), this, SLOT(setBtn_div()));
	connect(this->ui.btn_equ, SIGNAL(clicked(bool)), this, SLOT(setBtn_equ()));
	connect(this->ui.btn_clear, SIGNAL(clicked(bool)), this, SLOT(setBtn_clear()));
	this->tmp = "";
	this->mode = new model;
	this->len = 0;
}

void caculator::getBtn0()
{
	if (this->tmp != "" && this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_0->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn1()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_1->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn2()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_2->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn3()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_3->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn4()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_4->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn5()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_5->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn6()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_6->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn7()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_7->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn8()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_8->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::getBtn9()
{
	if (this->tmp.length() < 10)
	{
		this->tmp += this->ui.btn_9->text();
		this->ui.lab_display->setText(this->tmp);
	}
}

void caculator::setBtn_add()
{
	int num = this->tmp.toInt();
	this->mode->setNum1(num);
	this->tmp = "";
	QString ex = this->ui.btn_add->text();
	this->mode->setFlag(ex);
}

void caculator::setBtn_sub()
{
	int num = this->tmp.toInt();
	this->mode->setNum1(num);
	this->tmp = "";
	QString ex = this->ui.btn_sub->text();
	this->mode->setFlag(ex);
}

void caculator::setBtn_mul()
{
	int num = this->tmp.toInt();
	this->mode->setNum1(num);
	this->tmp = "";
	QString ex = this->ui.btn_mul->text();
	this->mode->setFlag(ex);
}

void caculator::setBtn_div()
{
	int num = this->tmp.toInt();
	this->mode->setNum1(num);
	this->tmp = "";
	QString ex = this->ui.btn_div->text();
	this->mode->setFlag(ex);
}

void caculator::setBtn_equ()
{
	int num = this->tmp.toInt();
	this->mode->setNum2(num);
	QString res = this->mode->doExpr();
	if (res.length() > 10)
	{
		this->ui.lab_display->setText("OVERLENGTH");
		this->tmp = "";
	}
	else
	{
		this->ui.lab_display->setText(res);
		this->tmp = res;
	}
}

void caculator::setBtn_clear()
{
	this->tmp = "";
	this->ui.lab_display->setText("0");
}