#pragma once
class Smoke {//����������������
private:
	double LG;    //Һ���� liquefied gas
	double Butane;   //����
	double Propane; //����
	double Methane; //����
	double alcohol; //�ƾ�
	double hydrogen; //����
	double fumes; //����
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
