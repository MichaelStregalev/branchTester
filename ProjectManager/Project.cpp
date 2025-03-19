#include "Project.h"

Project::Project(const std::string& name, const std::string& author) :
	m_name(name), m_author(author)
{
}

std::string Project::getName()
{
	return m_name;
}

std::string Project::getAuthor()
{
	return m_author;
}

std::string Project::toString()
{
	return m_name + " - " + m_author;
}
