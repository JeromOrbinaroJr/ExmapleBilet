#pragma once
#include <string>

struct Address
{
	std::string m_street;
	int m_houseNumber;
	int m_flatNumber;

	Address() = default;
	Address(const std::string& street, int houseNumber, int flatNumber);
};