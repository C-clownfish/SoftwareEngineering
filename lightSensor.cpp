#include "lightSensor.h"

lightSensor::lightSensor(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->brightness = 0;
}


lightSensor::lightSensor() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->brightness = 0;
}


double lightSensor::Get_X() {
	return this->x;
}


double lightSensor::Get_Y() {
	return this->y;
}


double lightSensor::Get_Z() {
	return this->z;
}


double lightSensor::Get_Brightness() {
	return this->brightness;
}


void lightSensor::Set_X(double x) {
	this->x = x;
}


void lightSensor::Set_Y(double y) {
	this->y = y;
}


void lightSensor::Set_Z(double z) {
	this->z = z;
}


void lightSensor::Set_Brightness(double brightness) {
	this->brightness = brightness;
}



double lightSensor::Get_Window() {
	return this->window;
}


double lightSensor::Get_Tape() {
	return this->tape;
}


double lightSensor::Get_Light() {
	return this->light;
}


void lightSensor::Set_Window(double window) {
	this->window = window;
}


void lightSensor::Set_Tape(double tape) {
	this->tape = tape;
}


void lightSensor::Set_Light(double light) {
	this->light = light;
}
