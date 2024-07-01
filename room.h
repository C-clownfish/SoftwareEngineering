#pragma once
#include "GasSensor.h"      //烟雾传感器
#include "devicePara.h"     //传感器的数量
#include "lightLocation.h"   //灯
#include "lightSensor.h"   //光照传感器
#include "tapeLight.h"   //氛围灯
#include "temperature.h"  //温度传感器
#include "windowAttribute.h" //窗帘
#include <vector>
class ROOM
{
private:
	//设备的参数
	Smoke  Smoke_Sensor;
	Temperature Temperature_Sensor;
	lightSensor Light_Sensor;
//	devicePara device;

	vector<lightLocation> lights;
	vector<tapeLight> tapelights;
	windowAttribute curtain;

	//房屋自身的参数
	double x;
	double y;
	double width;
	double height;

public:

	ROOM();
	//ROOM(Smoke  Smoke_Sensor, Temperature Temperature_Sensor, lightSensor Light_Sensor, devicePara device, vector<lightLocation> lights, vector<tapeLight> tapelights, windowAttribute curtain, double x, double y, double width, double height);
	ROOM(Smoke  Smoke_Sensor, Temperature Temperature_Sensor, lightSensor Light_Sensor, vector<lightLocation> lights, vector<tapeLight> tapelights, windowAttribute curtain, double x, double y, double width, double height);
	bool Isinroom(double x, double y);
	void init(double x, double y, double width, double height);


	Smoke GetSmoke_Sensor() const;
	Temperature GetTemperature_Sensor() const;
	lightSensor GetLight_Sensor() const;
	//devicePara Getdevice() const;
	void SetSmoke_Sensor(Smoke Smoke_Sensor);
	void SetTemperature_Sensor(Temperature Temperature_Sensor);
	void SetLight_Sensor(lightSensor Light_Sensor);
	//void Setdevice(devicePara device);

	windowAttribute Getcurtain() const;
	void Setcurtain(windowAttribute curtain);

	vector<lightLocation> Getlights() const;
	void Setlights(vector<lightLocation> lights);
	void Setlight(lightLocation light);
	void Deletelight(lightLocation light);

	vector<tapeLight> Gettapelights() const;
	void Settapelights(vector<tapeLight> tapelights);
	void Settapelight(tapeLight tapelight);
	void Deletetapelight(tapeLight tapelight);
};

