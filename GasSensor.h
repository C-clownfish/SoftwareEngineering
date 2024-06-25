#pragma once
class Smoke {
private:
	double LG;    //Òº»¯Æø liquefied gas
	double Butane;   //¶¡Íé
	double Propane; //±ûÍé
	double Methane; //¼×Íé
	double alcohol; //¾Æ¾«
	double hydrogen; //ÇâÆø
	double fumes; //ÑÌÎí
public:
	Smoke();
	Smoke(double LG, double Butane, double Propane, double Methane, double alcohol, double hydrogen, double fumes);

	double GetLG();
	double GetButane();

	double GetPropane();

	double GetMethane();

    double Getalcohol();

	double Gethydrogen();

	double Getfumes();

	void SetLG(double LG);

	void SetButane(double Butane);

	void SetPropane(double Propane);

	void SetMethane(double Methane);

	void Setalcohol(double alcohol);

	void Sethydrogen(double hydrogen);

	void Setfumes(double fumes);
};