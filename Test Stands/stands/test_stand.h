#pragma once
#include "../engine/combustion/engine_model.h"
class Stand
{
public:
	Combustion TestEngine;
	void setParameters(double ambientTemperature);
};