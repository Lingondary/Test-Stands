#pragma once
#include <vector>

class Engine
{
	double I;                    // ������ �������
	double overheatTemperature;  // ����������� ���������
	double Hm;					 // ����������� ����������� �������� ������� �� ��������� �������
	double Hv;					 // ����������� ����������� �������� ������� �� �������� �������� ���������
	double C;				     // ����������� ����������� �������� ���������� �� ����������� ��������� � ���������� �����
	double M;					 // �������� ������
	double V;					 // �������� �������� ���������  
	double N;					 // �������� ���������

	double EngineTemp;
	int time = 0;			     // ����� ������

public:
	std::vector<double> OperationM;
	std::vector<double> OperationV;

	void startEngine();

	double Vc(double ambientTemperature, double engineTemperature, double C);  // �������� ���������� ���������
	double Vh(double Hm, double Hv);										   // �������� ������� ���������
	double accelerationValue(double I);
	double power();

	void setI(double value);
	void setOverheatTemperature(double value);
	void setEngineTemp(double value);
	void setHm(double value);
	void setHv(double value);
	void setC(double value);
	void setM(double value);
	void setV(double value);

	double getI();
	double getEngineTemp();
	double getOverheatTemperature();
	double getHm();
	double getHv();
	double getC();
	double getM();
	double getV();

	void setOperationM(std::vector<double> values);
	void setOperationV(std::vector<double> values);

	void increaseWorkingTime();
	int getWorkingTime();
};