#include "temperature.h"
#include "pch.h"
using namespace std;

Temperature::Temperature() {
    this->currentTemp = 0.0;
    this->minTemp = 0.0;
    this->maxTemp = 0.0;
    this->averageTemp = 0.0;
    this->x = 0.0;
    this->y = 0.0;
    this->z = 0.0;
}

Temperature::Temperature(double currentTemp, double minTemp, double maxTemp, double averageTemp, double x, double y, double z) {
    this->currentTemp = currentTemp;
    this->minTemp = minTemp;
    this->maxTemp = maxTemp;
    this->averageTemp = averageTemp;
    this->x = x;
    this->y = y;
    this->z = z;
}

double Temperature::GetCurrentTemp() const {
    return this->currentTemp;
}

double Temperature::GetMinTemp() const {
    return this->minTemp;
}

double Temperature::GetMaxTemp() const {
    return this->maxTemp;
}

double Temperature::GetAverageTemp() const {
    return this->averageTemp;
}

double Temperature::GetX() const {
    return this->x;
}

double Temperature::GetY() const {
    return this->y;
}

double Temperature::GetZ() const {
    return this->z;
}


void Temperature::SetCurrentTemp(double currentTemp) {
    this->currentTemp = currentTemp;
}

void Temperature::SetMinTemp(double minTemp) {
    this->minTemp = minTemp;
}

void Temperature::SetMaxTemp(double maxTemp) {
    this->maxTemp = maxTemp;
}

void Temperature::SetAverageTemp(double averageTemp) {
    this->averageTemp = averageTemp;
}

void Temperature::SetX(double x) {
    this->x = x;
}

void Temperature::SetY(double y) {
    this->y = y;
}

void Temperature::SetZ(double z) {
    this->z = z;
}
