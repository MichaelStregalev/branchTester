#include "menu.h"
#include <iostream>

void printMenu()
{
	std::cout << "Projects Manager - v0.0.1" << std::endl;
	std::cout << "-------------------------\n" << std::endl;
	std::cout << "\tnew <project_name> <author>" << std::endl;
	std::cout << "\tshow <project_name>" << std::endl;
	std::cout << "\tdelete <project_name>" << std::endl;
	std::cout << "\tmodify <project_name> <new_name>\n" << std::endl;
}