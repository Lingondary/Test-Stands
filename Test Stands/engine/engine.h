#pragma once
#include <vector>

class Engine
{
	double I;                    // Момент инерции
	double overheatTemperature;  // Температура перегрева
	double Hm;					 // Коэффициент зависимости скорости нагрева от крутящего момента
	double Hv;					 // Коэффициент зависимости скорости нагрева от скорости вращения коленвала
	double C;				     // Коэффициент зависимости скорости охлаждения от температуры двигателя и окружающей среды
	double M;					 // Крутящий момент
	double V;					 // Скорость вращения коленвала  
	double N;					 // Мощность двигателя

	double EngineTemp;
	int time = 0;			     // Время работы

public:
	std::vector<double> OperationM;
	std::vector<double> OperationV;

	void startEngine();

	double Vc(double ambientTemperature, double engineTemperature, double C);  // Скорость охлаждения двигателя
	double Vh(double Hm, double Hv);										   // Скорость нагрева двигателя
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