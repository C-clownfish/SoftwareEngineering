#pragma once
class Smoke {
private:
	int LG;    //Һ���� liquefied gas
	int Butane;   //����
	int Propane; //����
	int Methane; //����
	int alcohol; //�ƾ�
	int hydrogen; //����
	int fumes; //����
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