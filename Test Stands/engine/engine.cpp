#include "engine.h"

void Engine::startEngine()
{
	M = OperationM[0];
	V = OperationV[0];
}

double Engine::Vc(double ambientTemperature, double engineTemperature, double C)  // Скорость охлаждения двигателя
{
	return C * (ambientTemperature - engineTemperature);
}

double Engine::Vh(double Hm, double Hv) // Скорость нагрева двигателя
{
	return M * Hm + V * V * Hv;
}

double Engine::accelerationValue(double I)  // Ускорение
{
	return M / I;
}

void Engine::setI(double value)
{
	I = value;
}

void Engine::setOverheatTemperature(double value)
{
	overheatTemperature = value;
}

double Engine::getOverheatTemperature()
{
	return overheatTemperature;
}

void Engine::setHm(double value)
{
	Hm = value;
}

void Engine::setHv(double value)
{
	Hv = value;
}
void Engine::setC(double value)
{
	C = value;
}
void Engine::setM(double value)
{
	 M = value;
}
void Engine::setV(double value)
{
	 V += value;
}

void Engine::setOperationM(std::vector<double> values)
{
	OperationM.resize(size(std::vector<double>(values)));
	for (int i = 0; i < size(values); i++)
		OperationM[i] = values[i];
}
void Engine::setOperationV(std::vector<double> values)
{
	OperationV.resize(size(std::vector<double>(values)));
	for (int i = 0; i < size(values); i++)
		OperationV[i] = values[i];
}

void Engine::setEngineTemp(double value)
{
	EngineTemp += value;
}

void Engine::increaseWorkingTime()
{
	time++;
}

double Engine::power()                // Мощность двигателя
{
	N = M * (V / 1000);
	return N;
}

int Engine::getWorkingTime()  
{
	return time;
}

double Engine::getI()
{
	return I;
}

double Engine::getHm()
{
	return Hm;
}
double Engine::getHv()
{
	return Hv;
}
double Engine::getC()
{
	return C;
}
double Engine::getM()
{
	return M;
}
double Engine::getV()
{
	return V;
}
double Engine::getEngineTemp() 
{
	return EngineTemp;
}