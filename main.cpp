#include <bits/stdc++.h>
using namespace std;

int numberOfLight = 0;


class lightSensor {//智能家居中光照传感器的位置
private:
	double x;//长
	double y;//宽
	double z;//高

public:

	lightSensor(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	lightSensor() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	double Get_x() {
		return this->x;
	}
	double Get_y() {
		return this->y;
	}
	double Get_z() {
		return this->z;
	}

	void Set_x(double x) {
		this->x = x;
	}
	void Set_y(double y) {
		this->y = y;
	}
	void Set_z(double) {
		this->z = z;
	}

};

double calculateDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_x() - sensor.Get_x()), 2) + ((light.Get_y() - sensor.Get_y()), 2) + ((light.Get_z() - sensor.Get_z()), 2);
	distance = sqrt(distance);
	return distance;
}

int main() {
	lightLocation light1 = lightLocation(0, 0, 0);
	lightSensor sensor1 = lightSensor(1, 2, 3);

	cout << calculateDistance(light1, sensor1);

	return 0;
}