#pragma once
class tapeLight//智能灯带
{
private:
	double watt;
	int r;
	int g;
	int b;

	double x;
	double y;
	double z;
	//待用
	double maxWatt;//最大功率
	double minWatt;//最小功率
	double averageWatt;//平均功率
public:
	tapeLight(double x, double y, double z, int r, int g, int b, double watt);
	tapeLight(double x, double y, double z);
	tapeLight();
	void Set_R(int r);
	void Set_G(int g);
	void Set_B(int b);
	void Set_X(double x);
	void Set_Y(double y);
	void Set_Z(double z);
	void Set_Watt(double watt);

	int Get_R();
	int Get_G();
	int Get_B();
	double Get_X();
	double Get_Y();
	double Get_Z();
	double Get_Watt();

	double Get_maxWatt();
	double Get_minWatt();
	double Get_averageWatt();
};

