#pragma once
#include "pch.h"
class Window
{

private:
	double x;//长
	double y;//宽
	double z;//高
	double openPercent;//打开的比例
	string name;//id
	static int number;//序号

public:
	Window();
	Window(double x, double y, double z, double openPercent, string name);
	double Get_X();
	double Get_Y();
	double Get_Z();
	double Get_Percent();
	string Get_Name();

	void Set_X(double x);
	void Set_Y(double y);
	void Set_Z(double z);
	void Set_Percent(double openPercent);
	void Set_Name(string name);
};

