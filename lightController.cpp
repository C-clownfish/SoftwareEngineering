#include "lightController.h"

double lightController::lightDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_X() - sensor.Get_X()), 2) + ((light.Get_Y() - sensor.Get_Y()), 2) + ((light.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::windowAttributeDistance(windowAttribute windowAttribute, lightSensor sensor) {
	double distance;
	distance = pow((windowAttribute.Get_X() - sensor.Get_X()), 2) + ((windowAttribute.Get_Y() - sensor.Get_Y()), 2) + ((windowAttribute.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}