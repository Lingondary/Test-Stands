#include <cmath>
#include <iostream>
#include "max_power.h"

void MaxPower::startTest(double ambientTemperature)
{
	while (TestEngine.getV() < TestEngine.OperationV.back())
	{
		double buff = TestEngine.getV();
		TestEngine.acceleration(ambientTemperature);
		if (trunc(buff) == trunc(TestEngine.getV()))
		{
			break;
		}
		buff = TestEngine.getV();
	}
	std::cout << "Максимальная мощность двигателя: " << trunc(TestEngine.power()) << " кВт.\n";
	std::cout << "При скорости коленвала: " << trunc(TestEngine.getV()) << " радиан/сек.";
}