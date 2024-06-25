#include "devicePara.h"


devicePara::devicePara() {
	this->photo_sensor = 0;
	this->temperature_sensor = 0;
	this->gas_sensor = 0;
	this->recognition_sensor = 0;
}


devicePara::devicePara(int photo_sensor, int temperature_sensor, int gas_sensor, int recognition_sensor) {
	this->photo_sensor = photo_sensor;
	this->temperature_sensor = temperature_sensor;
	this->gas_sensor = gas_sensor;
	this->recognition_sensor = recognition_sensor;
}


int devicePara::Get_photo_sensor() {
	return this->photo_sensor;
}


int devicePara::Get_temperature_sensor() {
	return this->temperature_sensor;
}


int devicePara::Get_gas_sensor() {
	return this->gas_sensor;
}


int devicePara::Get_recognition_sensor() {
	return this->recognition_sensor;
}


void devicePara::Add_photo_sensor() {
	this->photo_sensor++;
}


void devicePara::Add_temperature_sensor() {
	this->temperature_sensor++;
}


void devicePara::Add_gas_sensor() {
	this->gas_sensor++;
}


void devicePara::Add_recognition_sensor() {
	this->recognition_sensor++;
}