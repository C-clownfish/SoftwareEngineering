#include "lightController.h"
const double coefficient = 90.0;
const double sunny = 20000.0;
const double overcast = 10000.0;
const double rainy = 5000.0;

lightController::lightController() {

}


double lightController::lightDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_X() - sensor.Get_X()), 2) + pow((light.Get_Y() - sensor.Get_Y()), 2) + pow((light.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::tapeDistance(tapeLight tape, lightSensor sensor) {
	double distance;
	distance = pow((tape.Get_X() - sensor.Get_X()), 2) + pow((tape.Get_Y() - sensor.Get_Y()), 2) + pow((tape.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::windowDistance(windowAttribute window, lightSensor sensor) {
	double distance;
	distance = pow((window.Get_X() - sensor.Get_X()), 2) + pow((window.Get_Y() - sensor.Get_Y()), 2) + pow((window.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::calculateBrightness(vector<lightSensor>& sensor, vector<lightLocation>pointLight, vector<windowAttribute>areaLight, vector<tapeLight>tapeLights, SunTime today) {
	double illumination;
	switch (today.Get_Weather())
	{
	case 1://晴天
		illumination = sunny;
		break;
	case 2://阴天
		illumination = overcast;
		break;
	case 3://雨天
		illumination = rainy;
		break;
	default:
		illumination = sunny;
		break;
	}
	for (auto &sensor_iter : sensor) {
		double temp_brightness = 0.0;
		double window = 0.0;
		double tape = 0.0;
		double light = 0.0;
		for (auto light_iter : pointLight) {//灯的亮度
			light += coefficient * light_iter.Get_Watt() / lightDistance(light_iter, sensor_iter);
			temp_brightness += light;
		}

		for (auto tape_iter : tapeLights) {//灯带亮度
			tape += coefficient * tape_iter.Get_Watt() / tapeDistance(tape_iter, sensor_iter);
			temp_brightness += tape;
		}

		SYSTEMTIME time;
		GetLocalTime(&time);
		int sunrise_second = today.Get_RiseHour() * 3600 + today.Get_RiseMinute() * 60 + today.Get_RiseSecond();
		int sunset_second= today.Get_SetHour() * 3600 + today.Get_SetMinute() * 60 + today.Get_SetSecond();
		int current_second = time.wHour * 3600 + time.wMinute * 60 + time.wSecond;
		//cout << time.wYear << "/" << time.wMonth << "/" << time.wDay << "/" << time.wHour << "/" << time.wMinute << "/" << time.wSecond << endl;
		for (auto window_iter : areaLight) {//窗户的亮度
			if (current_second <= sunrise_second) {//日出前光照为0
				window += 0;
			}
			else if (current_second > sunrise_second && current_second < sunset_second) {
				double window_brightness;
				if (current_second <= sunrise_second + 3600) {//线性增长
					window_brightness = (100 + (illumination - 100) / 3600 * (current_second - sunrise_second));
				}
				else if (current_second <= sunset_second - 3600) {
					window_brightness = illumination;
				}
				else if (current_second > sunset_second - 3600 && current_second < sunset_second) {
					window_brightness = (illumination - (1 - (sunset_second - current_second) / 3600) * (illumination - 100));
				}
				window += window_brightness * window_iter.Get_Percent();
			}
			else if (current_second >= sunset_second) {
				window += 0;
			}
			temp_brightness += window;
		}
		//cout << temp_brightness << endl;
		sensor_iter.Set_Window(window);
		sensor_iter.Set_Tape(tape);
		sensor_iter.Set_Light(light);
		sensor_iter.Set_Brightness(temp_brightness);
	}
	return 0;
}
