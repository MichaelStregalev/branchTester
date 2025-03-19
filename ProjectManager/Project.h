#pragma once

#include <string>

class Project
{
public:

	// CONSTRUCTOR
	Project(const std::string& name, const std::string& author);

	// GETTERS
	std::string getName();
	std::string getAuthor();

	// TO-STRING
	std::string toString();

private:
	std::string m_name;
	std::string m_author;
};