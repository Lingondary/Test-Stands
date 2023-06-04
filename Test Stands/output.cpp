#include <iostream>
#include <conio.h>
#include "./stands/overheat/overheat.h"
#include "./stands/max_power/max_power.h"

static void runOverheatTest(double ambientTemperature)
{
	Overheat overheat;
	overheat.setParameters(ambientTemperature);
	std::cout << "����� �� ���������: " << overheat.startTest(ambientTemperature) << " �.� �������.";
};

static void runPowerTest(double ambientTemperature)
{
	MaxPower MaxPower;
	MaxPower.setParameters(ambientTemperature);
	MaxPower.startTest(ambientTemperature);
};

static void mainMenu()
{
	std::cout << "�������� ����:\n 1. ���� �� ��������.\n 2. ���� ��������.";

	switch (_getch())
	{
	case 49:
		system("cls");
		std::cout << "������� ����������� ���������� �����:";
		double ambientTemperature;
		std::cin >> ambientTemperature;
		runOverheatTest(ambientTemperature);
		break;
	case 50:
		ambientTemperature = 0;
		system("cls");
		runPowerTest(ambientTemperature);
		break;
	}
}
