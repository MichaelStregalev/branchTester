#include "menu.h"
#include <iostream>

int main()
{
	printMenu();

	std::string command = "";

	while (command != "exit")
	{
		try
		{
			std::cin >> command;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}