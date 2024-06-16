#include "Resident.h"
#include "ResidentManager.h"

// Constructors
Resident::Resident(const std::string& surname, const std::string& street, int houseNumber, int flatNumber) :
    m_surname(surname), m_address(street, houseNumber, flatNumber) {
    m_addresses.push_back(m_address);
    ResidentManager::getInstance().addResident(*this);
}

// Getters
const std::string& Resident::getSurname() const { return m_surname; }
const std::string& Resident::getStreet() const { return m_address.m_street; }
int Resident::getHouseNumber() const { return m_address.m_houseNumber; }
int Resident::getFlatNumber() const { return m_address.m_flatNumber; }

// Setters
void Resident::setSurname(const std::string& surname) { m_surname = surname; }
void Resident::setStreet(const std::string& street) { m_address.m_street = street; }
void Resident::setHouseNumber(int houseNumber) { m_address.m_houseNumber = houseNumber; }
void Resident::setFlatNumber(int flatNumber) { m_address.m_flatNumber = flatNumber; }

// Methods
void Resident::addAddress(const Address& address) {
    m_addresses.push_back(address);
}