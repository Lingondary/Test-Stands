#pragma once
#include "../test_stand.h"

class Overheat : public Stand
{
public:
	int startTest(double ambientTemperature);
};