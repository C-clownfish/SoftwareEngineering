#include "lightLocation.h"
class lightLocation {//智能家居中所有灯的属性
private:
	double x;//长
	double y;//宽
	double z;//高
	double watt;//功率


public:
	lightLocation(double x, double y, double z,double watt) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->watt = watt;
	}

	lightLocation() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
		this->watt = 0;
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