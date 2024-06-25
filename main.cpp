#include "devicePara.h"
#include "GasSensor.h"
#include "lightController.h"
#include "lightLocation.h"
#include "lightSensor.h"
#include "Temperature.h"
#include "TemperatureControl.h"
#include "windowAttribute.h"
#include "SunTime.h"
#include "pch.h"
using namespace std;

int main() {	
    windowAttribute window1 = windowAttribute(1,1,1,0.8,"��������");//���Դ���
    cout << window1.Get_Name() << endl;
    vector<windowAttribute>testwindow;
    testwindow.push_back(window1);

    lightSensor sensor1 = lightSensor(2, 3, 3);//���Դ�����
    cout << sensor1.Get_X() << endl;
    vector<lightSensor>testsensor;
    testsensor.push_back(sensor1);

    lightLocation light1 = lightLocation(3, 5, 5, 10);//���Ե�
    cout << light1.Get_watt() << endl;
    vector<lightLocation>testlight;
    testlight.push_back(light1);

    SunTime today = SunTime(4, 54, 0, 19, 1, 0);//����ʱ��
    cout << today.Get_RiseTime() << endl;
    cout << today.Get_SetTime() << endl;

    lightController lightcontroller = lightController();//�������ȼ���
    lightcontroller.calculateBrightness(testsensor, testlight, testwindow, today);
    for (auto iter : testsensor) {
        cout << iter.Get_Brightness() << endl;
    }

    return 0;
}