#include "devicePara.h"
#include "GasSensor.h"
#include "lightController.h"
#include "lightLocation.h"
#include "lightSensor.h"
#include "Temperature.h"
#include "TemperatureControl.h"
#include "Window.h"
#include "pch.h"
using namespace std;

int main() {	
    // 创建Temperature对象，设置当前温度为75.0
    Temperature temp(75.0, 0.0, 100.0, 50.0, 10.0, 20.0, 30.0);

    // 创建TemperatureControl对象，设置阈值为70.0
    TemperatureControl tempControl(70.0);

    // 检查温度是否过高
    if (tempControl.IsTemperatureHigh(temp)) {
        std::cout << "温度过高" << std::endl;
    }
    else {
        std::cout << "温度正常" << std::endl;
    }

    return 0;
}