#pragma once
#include "Temperature.h"

class TemperatureControl {//温度传感器的控制
private:
    double threshold; // 温度阈值

public:
    TemperatureControl(double threshold);

    bool IsTemperatureHigh(const Temperature& temp) const;
};
