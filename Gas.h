#pragma once
class Smoke {
private:
	int LG;    //Òº»¯Æø liquefied gas
	int Butane;   //¶¡Íé
	int Propane; //±ûÍé
	int Methane; //¼×Íé
	int alcohol; //¾Æ¾«
	int hydrogen; //ÇâÆø
	int fumes; //ÑÌÎí
public:
	Smoke() {}
	Smoke(int LG, int Butane, int Propane, int Methane, int alcohol, int hydrogen, int fumes) {}

	int GetLG() {}
	int GetButane() {}

	int GetPropane() {}

	int GetMethane() {}

	int Getalcohol() {}

	int Gethydrogen() {}

	int Getfumes() {}

	void SetLG(int LG) {}

	void SetButane(int Butane) {}

	void SetPropane(int Propane) {}

	void SetMethane(int Methane) {}

	void Setalcohol(int alcohol) {}

	void Sethydrogen(int hydrogen) {}

	void Setfumes(int fumes) {}
};