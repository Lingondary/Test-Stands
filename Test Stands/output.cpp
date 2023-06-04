#include <iostream>
#include <conio.h>
#include "./stands/overheat/overheat.h"
#include "./stands/max_power/max_power.h"

static void runOverheatTest(double ambientTemperature)
{
	Overheat overheat;
	overheat.setParameters(ambientTemperature);
	std::cout << "Время до перегрева: " << overheat.startTest(ambientTemperature) << " у.е времени.";
};

static void runPowerTest(double ambientTemperature)
{
	MaxPower MaxPower;
	MaxPower.setParameters(ambientTemperature);
	MaxPower.startTest(ambientTemperature);
};

static void mainMenu()
{
	std::cout << "Выберите тест:\n 1. Тест на перегрев.\n 2. Тест мощности.";

	switch (_getch())
	{
	case 49:
		system("cls");
		std::cout << "Введите температуру окружающей среды:";
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
