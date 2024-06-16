#include "Address.h"

Address::Address(const std::string& street, const int houseNumber, const int flatNumber) :
	m_street(street), m_houseNumber(houseNumber), m_flatNumber(flatNumber) {}