#include "GasSensor.h"

Smoke::Smoke() {
	this->LG = 0;
	this->Butane = 0;
	this->Propane = 0;
	this->Methane = 0;
	this->alcohol = 0;
	this->hydrogen = 0;
	this->fumes = 0;
}

Smoke::Smoke(double LG, double Butane, double Propane, double Methane, double alcohol, double hydrogen, double fumes) {
	this->LG = LG;
	this->Butane = Butane;
	this->Propane = Propane;
	this->Methane = Methane;
	this->alcohol = alcohol;
	this->hydrogen = hydrogen;
	this->fumes = fumes;
}

double Smoke::GetLG() const {
	return this->LG;
}

double Smoke::GetButane() const {
	return this->Butane;
}

double Smoke::GetPropane() const {
	return this->Propane;
}

double Smoke::GetMethane() const {
	return this->Methane;
}

double Smoke::Getalcohol() const {
	return this->alcohol;
}

double Smoke::Gethydrogen() const {
	return this->hydrogen;
}

double Smoke::Getfumes() const {
	return this->fumes;
}

void Smoke::SetLG(double LG) {
	this->LG = LG;
}

void Smoke::SetButane(double Butane) {
	this->Butane = Butane;
}

void Smoke::SetPropane(double Propane) {
	this->Propane = Propane;
}

void Smoke::SetMethane(double Methane) {
	this->Methane = Methane;
}

void Smoke::Setalcohol(double alcohol) {
	this->alcohol = alcohol;
}

void Smoke::Sethydrogen(double hydrogen) {
	this->hydrogen = hydrogen;
}

void Smoke::Setfumes(double fumes) {
	this->fumes = fumes;
}
