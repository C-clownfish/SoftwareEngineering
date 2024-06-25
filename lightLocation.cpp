#include "lightLocation.h"
lightLocation::lightLocation(double length, double width, double height, double watt) {
	this->length = length;
	this->width = width;
	this->height = height;
	this->watt = watt;
	this->averageWatt = 0;
	this->maxWatt = 0;
	this->minWatt = 0;
}


lightLocation::lightLocation() {
	this->length = 0;
	this->width = 0;
	this->height = 0;
	this->watt = 0;
	this->averageWatt = 0;
	this->maxWatt = 0;
	this->minWatt = 0;
}


double lightLocation::Get_length() {
	return this->length;
}


double lightLocation::Get_width() {
	return this->width;
}


double lightLocation::Get_height() {
	return this->height;
}


double lightLocation::Get_watt() {
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


void lightLocation::Set_length(double length) {
	this->length = length;
}


void lightLocation::Set_width(double width) {
	this->width = width;
}


void lightLocation::Set_height(double height) {
	this->height = height;
}


void lightLocation::Set_watt(double watt) {
	this->watt = watt;
}