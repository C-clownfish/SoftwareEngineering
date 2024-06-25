#include "lightController.h"
#include "SunTime.h"
const double coefficient = 90.0;

lightController::lightController() {

}


double lightController::lightDistance(lightLocation light, lightSensor sensor) {
	double distance;
	distance = pow((light.Get_X() - sensor.Get_X()), 2) + pow((light.Get_Y() - sensor.Get_Y()), 2) + pow((light.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::windowDistance(windowAttribute window, lightSensor sensor) {
	double distance;
	distance = pow((window.Get_X() - sensor.Get_X()), 2) + pow((window.Get_Y() - sensor.Get_Y()), 2) + pow((window.Get_Z() - sensor.Get_Z()), 2);
	distance = sqrt(distance);
	return distance;
}


double lightController::calculateBrightness(vector<lightSensor> &sensor, vector<lightLocation>pointLight, vector<windowAttribute>areaLight, SunTime today) {
	for (auto &sensor_iter : sensor) {
		double temp_brightness = 0.0;
		for (auto light_iter : pointLight) {//灯的亮度
			temp_brightness += coefficient * light_iter.Get_watt() / lightDistance(light_iter, sensor_iter);
		}
		SYSTEMTIME time;
		GetLocalTime(&time);
		int sunrise_second = today.Get_RiseHour() * 3600 + today.Get_RiseMinute() * 60 + today.Get_RiseSecond();
		int sunset_second= today.Get_SetHour() * 3600 + today.Get_SetMinute() * 60 + today.Get_SetSecond();
		int current_second = time.wHour * 3600 + time.wMinute * 60 + time.wSecond;
		//cout << time.wYear << "/" << time.wMonth << "/" << time.wDay << "/" << time.wHour << "/" << time.wMinute << "/" << time.wSecond << endl;
		for (auto window_iter : areaLight) {//窗户的亮度
			if (current_second <= sunrise_second) {//日出前光照为0
				temp_brightness += 0;
			}
			else if (current_second > sunrise_second && current_second < sunset_second) {
				double window_brightness;
				if (current_second <= sunrise_second + 3600) {//线性增长
					window_brightness = (100 + (20000 - 100) / 3600 * (current_second - sunrise_second));
				}
				else if (current_second <= sunset_second - 3600) {
					window_brightness = 20000;
				}
				else if (current_second > sunset_second - 3600 && current_second < sunset_second) {
					window_brightness = (20000 - (1 - (sunset_second - current_second) / 3600) * (20000 - 100));
				}
				temp_brightness += window_brightness * window_iter.Get_Percent();
			}
			else if (current_second >= sunset_second) {
				temp_brightness += 0;
			}
		}
		//cout << temp_brightness << endl;
		sensor_iter.Set_Brightness(temp_brightness);
	}
	return 0;
}
