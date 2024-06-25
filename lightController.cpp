#include "lightController.h"

double lightController::lightDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_X() - sensor.Get_X()), 2) + ((light.Get_Y() - sensor.Get_Y()), 2) + ((light.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::windowDistance(Window window, lightSensor sensor) {
	double distance;
	distance = pow((window.Get_X() - sensor.Get_X()), 2) + ((window.Get_Y() - sensor.Get_Y()), 2) + ((window.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}