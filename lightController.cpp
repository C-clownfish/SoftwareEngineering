#include "lightController.h"
double calculateDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_length() - sensor.Get_length()), 2) + ((light.Get_width() - sensor.Get_width()), 2) + ((light.Get_height() - sensor.Get_height()), 2);
	distance = sqrt(distance);
	return distance;
}