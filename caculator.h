#pragma once

#include <QtWidgets/QDialog>
#include "ui_caculator.h"
#include "model.h"
#include <QString>

class caculator : public QDialog
{
	Q_OBJECT

public:
	caculator(QWidget *parent = Q_NULLPTR);
private slots:
	void getBtn0();
	void getBtn1();
	void getBtn2();
	void getBtn3();
	void getBtn4();
	void getBtn5();
	void getBtn6();
	void getBtn7();
	void getBtn8();
	void getBtn9();
	void setBtn_mul();
	void setBtn_div();
	void setBtn_add();
	void setBtn_sub();
	void setBtn_equ();
	void setBtn_clear();
private:
	Ui::caculatorClass ui;
	model *mode;
	QString tmp;
	int len;
};
