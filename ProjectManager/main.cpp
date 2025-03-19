#include "menu.h"
#include "stringHelper.h"
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
			toLowerCase(command);
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}