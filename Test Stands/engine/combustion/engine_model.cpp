#include "engine_model.h"

void Combustion::setThermalFuseValue(double value)
{
	ThermalFuseValue = value;
}

double Combustion::getThermalFuseValue()
{
	return ThermalFuseValue;
}

void Combustion::upShift()
{
	shift++;
};

int Combustion::getShift()
{
	return shift;
};

void Combustion::acceleration(double ambientTemperature) 
{

	setV(accelerationValue(getI()));

	if (shift < OperationM.size() - 2)									// ������ ��� "������������ �������" ��� ���������� ����������� ������������ ��������
		if (getV() >= OperationV[shift + 1])
			upShift();	

	double a = (getV() - OperationV[shift]);
	double c = (OperationV[shift + 1] - OperationV[shift]);
	double b = (OperationM[shift + 1] - OperationM[shift]);

	power();

	setEngineTemp(Vh(getHm(), getHv()) - Vc(ambientTemperature, getEngineTemp(), getC()));

	setM(a / c * b + OperationM[shift]);  // ������ M �� ����� ������� �������� ����������� y = kx + b
	
	increaseWorkingTime();

	setThermalFuseValue((getOverheatTemperature() - getEngineTemp()));
}