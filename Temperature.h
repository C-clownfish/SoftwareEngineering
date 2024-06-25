#pragma once
class Temperature {//温度传感器的属性
private:
    double x;              // 长
    double y;              // 宽
    double z;              // 高
    double currentTemp;    // 当前温度
    double minTemp;        // 最低温度
    double maxTemp;        // 最高温度
    double averageTemp;    // 平均温度

public:
    Temperature();
    Temperature(double currentTemp, double minTemp, double maxTemp, double averageTemp, double x, double y, double z);

    double GetCurrentTemp() const;
    double GetMinTemp() const;
    double GetMaxTemp() const;
    double GetAverageTemp() const;
    double GetX() const;
    double GetY() const;
    double GetZ() const;

    void SetCurrentTemp(double currentTemp);
    void SetMinTemp(double minTemp);
    void SetMaxTemp(double maxTemp);
    void SetAverageTemp(double averageTemp);
    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);
};
