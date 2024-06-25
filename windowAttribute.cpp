#include "windowAttribute.h"
int windowAttribute::number = 0;
windowAttribute::windowAttribute(double x, double y, double z,double openPercent,string name) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->openPercent = openPercent;
	this->name = name;
	this->number++;
}


windowAttribute::windowAttribute() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->openPercent = 1;
	this->name = "´°»§" + to_string(this->number);
	this->number++;
}


double windowAttribute::Get_X() {
	return this->x;
}


double windowAttribute::Get_Y() {
	return this->y;
}


double windowAttribute::Get_Z() {
	return this->z;
}


double windowAttribute::Get_Percent() {
	return this->openPercent;
}


string windowAttribute::Get_Name()
{
	return this->name;
}

void windowAttribute::Set_X(double x) {
	this->x = x;
}


void windowAttribute::Set_Y(double y) {
	this->y = y;
}


void windowAttribute::Set_Z(double z) {
	this->z = z;
}


void windowAttribute::Set_Percent(double openPercent) {
	this->openPercent = openPercent;
}


void windowAttribute::Set_Name(string name) {
	this->name = name;
}