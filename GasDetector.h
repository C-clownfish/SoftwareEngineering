#pragma once
#include "GasSensor.h"

class GasDetector {
private:
    Smoke smokeSensor;
    double threshold;
public:
    GasDetector();
    GasDetector(double threshold);

    void SetThreshold(double threshold);
    double GetThreshold() const;

    void UpdateReadings(double LG, double Butane, double Propane, double Methane, double alcohol, double hydrogen, double fumes);
    bool CheckForAlarm() const;
};

