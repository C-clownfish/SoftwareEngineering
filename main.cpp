#include "devicePara.h"
#include "GasSensor.h"
#include "lightController.h"
#include "lightLocation.h"
#include "lightSensor.h"
#include "Temperature.h"
#include "TemperatureControl.h"
#include "windowAttribute.h"
#include "SunTime.h"
#include "GasDetector.h"
#include "pch.h"
using namespace std;

int main() {	
    windowAttribute window1 = windowAttribute(1,1,1,0.8,"客厅窗户");//测试窗户
    cout << window1.Get_Name() << endl;
    vector<windowAttribute>testwindow;
    testwindow.push_back(window1);

    lightSensor sensor1 = lightSensor(2, 3, 3);//测试传感器
    cout << sensor1.Get_X() << endl;
    vector<lightSensor>testsensor;
    testsensor.push_back(sensor1);

    lightLocation light1 = lightLocation(3, 5, 5, 10);//测试灯
    cout << light1.Get_watt() << endl;
    vector<lightLocation>testlight;
    testlight.push_back(light1);

    SunTime today = SunTime(4, 54, 0, 19, 1, 0, "晴");//测试时间
    cout << today.Get_RiseTime() << endl;
    cout << today.Get_SetTime() << endl;

    lightController lightcontroller = lightController();//测试亮度计算
    lightcontroller.calculateBrightness(testsensor, testlight, testwindow, today);
    for (auto iter : testsensor) {
        cout << iter.Get_Brightness() << endl;
    }

    GasDetector detector(300); // 设置阈值为300

    
    double LG = 250;
    double Butane = 320;
    double Propane = 280;
    double Methane = 310;
    double alcohol = 100;
    double hydrogen = 150;
    double fumes = 400;

    detector.UpdateReadings(LG, Butane, Propane, Methane, alcohol, hydrogen, fumes);

    if (detector.CheckForAlarm()) {
        cout << "警报，危险气体泄露" << endl;
    }
    else {
        cout << "气体参数正常" << endl;
    }

    return 0;
}