#pragma once
class lightLocation {//智能家居中所有灯的属性
private:
	double x;//长
	double y;//宽
	double z;//高
	double watt;//功率
public:
	lightLocation(double x, double y, double z, double watt);
	lightLocation();
	double Get_x();
	double Get_y();
	double Get_z();
	void Set_x(double x);
	void Set_y(double y);
	void Set_z(double z);
};
