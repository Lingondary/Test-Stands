#include "overheat.h"

//Overheat::Overheat(double ambientTemperature)
//{
//	Overheat::setParameters(ambientTemperature);
//	TestEngine.startEngine();
//}

int Overheat::startTest(double ambientTemperature) {
	while (TestEngine.getEngineTemp() < TestEngine.getOverheatTemperature() && TestEngine.getWorkingTime() < 5000)
	{
		TestEngine.acceleration(ambientTemperature);
	}
	return TestEngine.getWorkingTime();
}
