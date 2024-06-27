#include "SunTime.h"
SunTime::SunTime(int rise_hour, int rise_minute, int rise_second, int set_hour, int set_minute, int set_second, string weather) {
	this->rise_hour = rise_hour;
	this->rise_minute = rise_minute;
	this->rise_second = rise_second;
	this->set_hour = set_hour;
	this->set_minute = set_minute;
	this->set_second = set_second;
	this->weather = weather;
}


string SunTime::Get_RiseTime() {
	return "日出时间：" + to_string(this->rise_hour) + ":" + to_string(this->rise_minute) + ":" + to_string(this->rise_second);
}


string SunTime::Get_SetTime() {
	return "日落时间：" + to_string(this->set_hour) + ":" + to_string(this->set_minute) + ":" + to_string(this->set_second);
}


int SunTime::Get_RiseHour() {
	return this->rise_hour;
}


int SunTime::Get_RiseMinute() {
	return this->rise_minute;
}


int SunTime::Get_RiseSecond() {
	return this->rise_second;
}


int SunTime::Get_SetHour() {
	return this->set_hour;
}


int SunTime::Get_SetMinute() {
	return this->set_minute;
}


int SunTime::Get_SetSecond() {
	return this->set_second;
}


int SunTime::Get_Weather() {
	if (this->weather == "晴") {
		return 1;
	}
	else if (this->weather == "阴") {
		return 2;
	}
	else if(this->weather == "雨") {
		return 3;
	}
}