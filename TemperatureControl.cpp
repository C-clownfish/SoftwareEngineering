#include "TemperatureControl.h"

TemperatureControl::TemperatureControl(double threshold) {
    this->threshold = threshold;
}

bool TemperatureControl::IsTemperatureHigh(const Temperature& temp) const {
    return temp.GetCurrentTemp() >= this->threshold;
}
