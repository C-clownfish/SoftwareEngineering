#pragma once

#include "pch.h"
class lightController
{
private:
	vector<lightLocation>pointLight;//点光源，灯的位置
	vector<Window>areaLight;//面光源,窗户位置
	double brightness;//当前环境亮度

public:
	double lightDistance(lightLocation light, lightSensor sensor);//计算光源与传感器之间的距离
	double windowDistance(Window window, lightSensor sensor);//计算光源与传感器之间的距离

};

