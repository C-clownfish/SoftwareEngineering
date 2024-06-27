#include "tapeLight.h"

tapeLight::tapeLight(double x, double y, double z, int r, int g, int b, double watt) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = r;
	this->g = g;
	this->b = b;
	this->watt = watt;
}


tapeLight::tapeLight(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = 0;
	this->g = 0;
	this->b = 0;
	this->watt = 0;
}


tapeLight::tapeLight() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->r = 0;
	this->g = 0;
	this->b = 0;
	this->watt = 0;
}


void tapeLight::Set_R(int r) {
	this->r = r;
}


void tapeLight::Set_G(int g) {
	this->g = g;
}


void tapeLight::Set_B(int b) {
	this->b = b;
}


void tapeLight::Set_Watt(double watt) {
	this->watt = watt;
}


void tapeLight::Set_X(double x) {
	this->x = x;
}


void tapeLight::Set_Y(double y) {
	this->y = y;
}


void tapeLight::Set_Z(double z) {
	this->z = z;
}


int tapeLight::Get_R() {
	return this->r;
}


int tapeLight::Get_G() {
	return this->g;
}


int tapeLight::Get_B() {
	return this->b;
}


double tapeLight::Get_Watt() {
	return this->watt;
}


double tapeLight::Get_X() {
	return this->x;
}


double tapeLight::Get_Y() {
	return this->y;
}


double tapeLight::Get_Z() {
	return this->z;
}

double tapeLight::Get_maxWatt() {
	return this->maxWatt;
}


double tapeLight::Get_minWatt() {
	return this->minWatt;
}


double tapeLight::Get_averageWatt() {
	return this->averageWatt;
}
