#pragma once
class lightLocation {//智能家居中所有灯的属性
private:
	double x;//长
	double y;//宽
	double z;//高
	double watt;//功率
	//待用
	double maxWatt;//最大功率
	double minWatt;//最小功率
	double averageWatt;//平均功率

public:
	lightLocation(double x, double y, double z, double watt);
	lightLocation();
	double Get_X();
	double Get_Y();
	double Get_Z();
	double Get_Watt();

	double Get_maxWatt();
	double Get_minWatt();
	double Get_averageWatt();

	void Set_X(double x);
	void Set_Y(double y);
	void Set_Z(double z);
	void Set_watt(double watt);
};
