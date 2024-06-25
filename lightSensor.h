#pragma once
class lightSensor {//智能家居中光照传感器的位置
private:
	double length;//长
	double width;//宽
	double height;//高
public:
	lightSensor(double length, double width, double height);
	lightSensor();
	double Get_length();
	double Get_width();
	double Get_height();
	void Set_length(double length);
	void Set_width(double width);
	void Set_height(double height);
};