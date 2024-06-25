#pragma once
class lightSensor {//智能家居中光照传感器的位置
private:
	double x;//长
	double y;//宽
	double z;//高
public:
	lightSensor(double x, double y, double z);
	lightSensor();
	double Get_X();
	double Get_Y();
	double Get_Z();
	void Set_X(double x);
	void Set_Y(double y);
	void Set_Z(double z);
};