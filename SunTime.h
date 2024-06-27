#pragma once
#include "pch.h"
#include <string>
using namespace std;
class SunTime
{
private:
	int rise_hour;
	int rise_minute;
	int rise_second;
	int set_hour;
	int set_minute;
	int set_second;
	string weather;

public:
	SunTime(int rise_hour, int rise_minute, int rise_second, int set_hour, int set_minute, int set_second, string weather);
	string Get_RiseTime();
	string Get_SetTime();
	int Get_Weather();
	int Get_RiseHour();
	int Get_RiseMinute();
	int Get_RiseSecond();
	int Get_SetHour();
	int Get_SetMinute();
	int Get_SetSecond();
};

