#pragma once
#include "../engine.h"

class Combustion : public Engine
{
	double ThermalFuseValue;
	int shift = 0;
public:
	void acceleration(double ambientTemperature);
	void setThermalFuseValue(double value);
	double getThermalFuseValue();

	void upShift();
	int getShift();
};