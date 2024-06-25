#include "Window.h"
int Window::number = 0;
Window::Window(double x, double y, double z,double openPercent,string name) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->openPercent = openPercent;
	this->name = name;
}


Window::Window() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->openPercent = 0;
	this->name = "´°»§" + to_string(this->number);
}


double Window::Get_X() {
	return this->x;
}


double Window::Get_Y() {
	return this->y;
}


double Window::Get_Z() {
	return this->z;
}


double Window::Get_Percent() {
	return this->openPercent;
}


string Window::Get_Name()
{
	return this->name;
}

void Window::Set_X(double x) {
	this->x = x;
}


void Window::Set_Y(double y) {
	this->y = y;
}


void Window::Set_Z(double z) {
	this->z = z;
}


void Window::Set_Percent(double openPercent) {
	this->openPercent = openPercent;
}


void Window::Set_Name(string name) {
	this->name = name;
}