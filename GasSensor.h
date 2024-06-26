#pragma once
class Smoke {//只能烟雾传感器控制类
private:
	double LG;    //液化气 liquefied gas
	double Butane;   //丁烷
	double Propane; //丙烷
	double Methane; //甲烷
	double alcohol; //酒精
	double hydrogen; //氢气
	double fumes; //烟雾
public:
	Smoke();
	Smoke(double LG, double Butane, double Propane, double Methane, double alcohol, double hydrogen, double fumes);

	double GetLG() const;
	double GetButane() const;
	double GetPropane() const;
	double GetMethane() const;
	double Getalcohol() const;
	double Gethydrogen() const;
	double Getfumes() const;

	void SetLG(double LG);
	void SetButane(double Butane);
	void SetPropane(double Propane);
	void SetMethane(double Methane);
	void Setalcohol(double alcohol);
	void Sethydrogen(double hydrogen);
	void Setfumes(double fumes);
};
