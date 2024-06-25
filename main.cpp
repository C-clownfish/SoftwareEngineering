#include <bits/stdc++.h>
using namespace std;

int numberOfLight = 0;




double calculateDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_length() - sensor.Get_length()), 2) + ((light.Get_width() - sensor.Get_width()), 2) + ((light.Get_height() - sensor.Get_height()), 2);
	distance = sqrt(distance);
	return distance;
}

int main() {
	lightLocation light1 = lightLocation(0, 0, 0);
	lightSensor sensor1 = lightSensor(1, 2, 3);

	cout << calculateDistance(light1, sensor1);
	000
	return 0;
	000000
}