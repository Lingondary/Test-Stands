#include "test_stand.h"


void Stand::setParameters(double ambientTemperature)   // ����� ������������ ����� ������� JSON ��� �������� �������� � ������ ������
{
	TestEngine.setI(10);
	TestEngine.setOverheatTemperature(110);
	TestEngine.setHm(0.01);
	TestEngine.setHv(0.0001);
	TestEngine.setC(0.1);
	TestEngine.setEngineTemp(ambientTemperature);

	std::vector<double> dataOperationM = { 20, 75, 100, 105, 75, 0 };
	std::vector<double> dataOperationV = { 0, 75, 150, 200, 250, 300 };

	TestEngine.setOperationM(dataOperationM);
	TestEngine.setOperationV(dataOperationV);
	TestEngine.startEngine();
}
