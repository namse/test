// BattleShip.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	while (1)
	{
		std::string guess_massage = "Input Your Guess (Quit: q) :";
		std::cout << guess_massage;
		std::string inputStr;
		std::cin >> inputStr;
		if (inputStr == "q")
		{
			break;
		}

		std::string response[] = { "hit", "miss", "destroy" };
		int output = rand() % 3;

		if (output < sizeof(response)/sizeof(response[0]))
		{
			std::cout << response[output] << std::endl;
		}
		else
		{
			std::cout << "Out Of Domain Error" << std::endl;
		}
	}
	return 0;
}

