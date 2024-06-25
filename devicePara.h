#pragma once
class devicePara
{
private:
	static int photo_sensor;//光强传感器个数
	static int temperature_sensor;//温度传感器个数
	static int gas_sensor;//气体传感器个数
	static int recognition_sensor;//人物识别传感器
public:
	devicePara();
	devicePara(int photo_sensor, int temperature_sensor, int gas_sensor, int recognition_sensor);
	int Get_photo_sensor();
	int Get_temperature_sensor();
	int Get_gas_sensor();
	int Get_recognition_sensor();
};

