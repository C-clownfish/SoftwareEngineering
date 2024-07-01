#include "lightLocation.h"
lightLocation::lightLocation(double x, double y, double z, double watt) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->watt = watt;
	this->averageWatt = 0;
	this->maxWatt = 0;
	this->minWatt = 0;
}


lightLocation::lightLocation() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->watt = 0;
	this->averageWatt = 0;
	this->maxWatt = 0;
	this->minWatt = 0;
}


double lightLocation::Get_X() {
	return this->x;
}


double lightLocation::Get_Y() {
	return this->y;
}


double lightLocation::Get_Z() {
	return this->z;
}


double lightLocation::Get_Watt() {
	return this->watt;
}


double lightLocation::Get_maxWatt() {
	return this->maxWatt;
}


double lightLocation::Get_minWatt() {
	return this->minWatt;
}


double lightLocation::Get_averageWatt() {
	return this->averageWatt;
}


void lightLocation::Set_X(double x) {
	this->x = x;
}


void lightLocation::Set_Y(double y) {
	this->y = y;
}


void lightLocation::Set_Z(double z) {
	this->z = z;
}


void lightLocation::Set_watt(double watt) {
	this->watt = watt;
}