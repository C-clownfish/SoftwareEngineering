#include "GasDetector.h"

GasDetector::GasDetector() : threshold(300) {}

GasDetector::GasDetector(double threshold) : threshold(threshold) {}

void GasDetector::SetThreshold(double threshold) {
    this->threshold = threshold;
}

double GasDetector::GetThreshold() const {
    return this->threshold;
}

void GasDetector::UpdateReadings(double LG, double Butane, double Propane, double Methane, double alcohol, double hydrogen, double fumes) {
    smokeSensor.SetLG(LG);
    smokeSensor.SetButane(Butane);
    smokeSensor.SetPropane(Propane);
    smokeSensor.SetMethane(Methane);
    smokeSensor.Setalcohol(alcohol);
    smokeSensor.Sethydrogen(hydrogen);
    smokeSensor.Setfumes(fumes);
}

bool GasDetector::CheckForAlarm() const {
    return smokeSensor.GetLG() > threshold ||
           smokeSensor.GetButane() > threshold ||
           smokeSensor.GetPropane() > threshold ||
           smokeSensor.GetMethane() > threshold ||
           smokeSensor.Getalcohol() > threshold ||
           smokeSensor.Gethydrogen() > threshold ||
           smokeSensor.Getfumes() > threshold;
}
