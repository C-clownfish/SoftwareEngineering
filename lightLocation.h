#pragma once
class lightLocation {//智能家居中所有灯的属性
private:
	double length;//长
	double width;//宽
	double height;//高
	double watt;//功率
	//待用
	double maxWatt;//最大功率
	double minWatt;//最小功率
	double averageWatt;//平均功率

public:
	lightLocation(double length, double width, double height, double watt);
	lightLocation();
	double Get_length();
	double Get_width();
	double Get_height();
	double Get_watt();

	double Get_maxWatt();
	double Get_minWatt();
	double Get_averageWatt();

	void Set_length(double length);
	void Set_width(double width);
	void Set_height(double height);
	void Set_watt(double watt);
};
