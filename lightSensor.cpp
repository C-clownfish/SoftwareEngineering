#include "lightSensor.h"

lightSensor::lightSensor(double length, double width, double height) {
	this->length = length;
	this->width = width;
	this->height = height;
}


lightSensor::lightSensor() {
	this->length = 0;
	this->width = 0;
	this->height = 0;
}


double lightSensor::Get_length() {
	return this->length;
}


double lightSensor::Get_width() {
	return this->width;
}


double lightSensor::Get_height() {
	return this->height;
}


void lightSensor::Set_length(double length) {
	this->length = length;
}


void lightSensor::Set_width(double width) {
	this->width = width;
}


void lightSensor::Set_height(double) {
	this->height = height;
}