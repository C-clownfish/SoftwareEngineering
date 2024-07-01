#pragma once

#include "windowAttribute.h"
#include "tapeLight.h"
#include "lightLocation.h"
#include "SunTime.h"
#include "lightSensor.h"
#include <Windows.h>
#include <vector>
class lightController
{
private:
	vector<lightLocation>pointLight;//点光源，灯的位置
	vector<windowAttribute>areaLight;//面光源,窗户位置
	vector<tapeLight>tapeLights;//点光源，灯带
	vector<lightSensor>sensor;//传感器位置

	//double brightness;//当前环境亮度

public:
	lightController();


	double lightDistance(lightLocation light, lightSensor sensor);//计算光源与传感器之间的距离
	double windowDistance(windowAttribute window, lightSensor sensor);//计算光源与传感器之间的距离
	double tapeDistance(tapeLight tape, lightSensor sensor);//计算光源与传感器之间的距离
	double calculateBrightness(vector<lightSensor>& sensor, vector<lightLocation>pointLight, vector<windowAttribute>areaLight, vector<tapeLight>tapeLights, SunTime today);
};

