#include "room.h"

ROOM::ROOM()
{
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->height = 0;
}

//ROOM::ROOM(Smoke Smoke_Sensor, Temperature Temperature_Sensor, lightSensor Light_Sensor, devicePara device, vector<lightLocation> lights, vector<tapeLight> tapelights, windowAttribute curtain, double x, double y, double width, double height)
ROOM::ROOM(Smoke Smoke_Sensor, Temperature Temperature_Sensor, lightSensor Light_Sensor, vector<lightLocation> lights, vector<tapeLight> tapelights, windowAttribute curtain, double x, double y, double width, double height)
{
    this->Smoke_Sensor = Smoke_Sensor;
    this->Temperature_Sensor = Temperature_Sensor;
    this->Light_Sensor = Light_Sensor;
 //   this->device = device;
    this->lights = lights;
    this->tapelights = tapelights;
    this->curtain = curtain;
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

bool ROOM::Isinroom(double x, double y)
{
    if (x > this->x && x<(this->x + this->width) && y>this->y && y < (this->y + this->height))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ROOM::init(double x, double y, double width, double height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

Smoke ROOM::GetSmoke_Sensor() const
{
    return Smoke_Sensor;
}

Temperature ROOM::GetTemperature_Sensor() const
{
    return Temperature_Sensor;
}

lightSensor ROOM::GetLight_Sensor() const
{
    return Light_Sensor;
}

//devicePara ROOM::Getdevice() const
//{
//    return device;
//}

void ROOM::SetSmoke_Sensor(Smoke Smoke_Sensor)
{
    this->Smoke_Sensor = Smoke_Sensor;
}

void ROOM::SetTemperature_Sensor(Temperature Temperature_Sensor)
{
    this->Temperature_Sensor = Temperature_Sensor;
}

void ROOM::SetLight_Sensor(lightSensor Light_Sensor)
{
    this->Light_Sensor = Light_Sensor;
}

//void ROOM::Setdevice(devicePara device)
//{
//    this->device = device;
//}

windowAttribute ROOM::Getcurtain() const
{
    return curtain;
}

void ROOM::Setcurtain(windowAttribute curtain)
{
    this->curtain = curtain;
}

vector<lightLocation> ROOM::Getlights() const
{
    return lights;
}

void ROOM::Setlights(vector<lightLocation> lights)
{
    this->lights = lights;
}

void ROOM::Setlight(lightLocation light)
{
    lights.push_back(light);
}

void ROOM::Deletelight(lightLocation light)
{
    for (vector<lightLocation>::iterator it=lights.begin();it!=lights.end();++it)
    {
        if (it->Get_X() == light.Get_X() && it->Get_Y() == light.Get_Y() && it->Get_Z() == light.Get_Z())
        {
            it = lights.erase(it); //防止it变成空指针报错。
            break;
        }
    }
}

vector<tapeLight> ROOM::Gettapelights() const
{
    return tapelights;
}

void ROOM::Settapelights(vector<tapeLight> tapelights)
{
    this->tapelights = tapelights;
}

void ROOM::Settapelight(tapeLight tapelight)
{
    tapelights.push_back(tapelight);
}

void ROOM::Deletetapelight(tapeLight tapelight)
{
    for (vector<tapeLight>::iterator it = tapelights.begin(); it != tapelights.end(); ++it)
    {
        if (it->Get_X() == tapelight.Get_X() && it->Get_Y() == tapelight.Get_Y() && it->Get_Z() == tapelight.Get_Z())
        {
            it = tapelights.erase(it); //防止it变成空指针报错。
            break;
        }
    }
}


