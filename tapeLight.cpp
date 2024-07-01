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


tapeLight::tapeLight(double x, double y, double z, double watt) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = 0;
	this->g = 0;
	this->b = 0;
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


void tapeLight::Gradient(double watt,int i) {//i是循环下标，0~360一周期
	float R = 0, G = 0, B = 0;
	float angle = (float)i / 180 * PI;
	float H = 2 * PI;
	float S = cos(angle * 4.0);
	float I = watt / 20.0;

	H = (float)H * cos(angle);
	//cout << H << endl;

	if (H < 120.f * PI / 180.f)
	{
		B = I * (1 - S);
		R = I * (1 + S * cos(H) / cos(60.f * PI / 180.f - H));
		G = 3 * I - R - B;
	}
	else if (H >= 120.f * PI / 180.f && H < 240 * PI / 180.f)
	{
		H -= (120.f * PI / 180.f);
		R = I * (1 - S);
		G = I * (1 + S * cos(H) / cos(60.f * PI / 180.f - H));
		B = 3 * I - R - G;
	}
	else if (H >= 240.f * PI / 180.f)
	{
		H -= (240.f * PI / 180.f);
		G = I * (1 - S);
		B = I * (1 + S * cos(H) / cos(60.f * PI / 180.f - H));
		R = 3 * I - B - G;
	}
	this->Set_R(R * 255 > 255 ? 255 : R * 255);
	this->Set_G(G * 255 > 255 ? 255 : G * 255);
	this->Set_B(B * 255 > 255 ? 255 : B * 255);
}
