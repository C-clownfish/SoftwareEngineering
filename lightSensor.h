#pragma once
class lightSensor {//智能家居中光照传感器的位置
private:
	double x;//长
	double y;//宽
	double z;//高
	double window;//环境亮度
	double tape;//灯带亮度
	double light;//照明灯亮度
	double brightness;//测得的光照
public:
	lightSensor(double x, double y, double z);
	lightSensor();
	double Get_X();
	double Get_Y();
	double Get_Z();
	double Get_Brightness();
	void Set_X(double x);
	void Set_Y(double y);
	void Set_Z(double z);
	void Set_Brightness(double brightness);

	double Get_Window();
	double Get_Tape();
	double Get_Light();

	void Set_Window(double window);
	void Set_Tape(double tape);
	void Set_Light(double light);
};