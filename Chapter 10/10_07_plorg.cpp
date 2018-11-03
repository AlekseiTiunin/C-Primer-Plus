#pragma once
#include "plorg.h"
#include <iostream>

Plorg::Plorg(const char *name)
{
	strncpy(m_name, name, NAMELEN);
	m_name[NAMELEN - 1] = '\0';
	m_CI = 50;
}
	
void Plorg::AddCI(int change)
{
	m_CI += change;
}
void Plorg::SubCI(int change)
{
	m_CI -= change;
}

void Plorg::Show() const
{
	std::cout << "I'm " << m_name << ". My CI = " << m_CI;
}
