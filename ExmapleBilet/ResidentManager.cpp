#include "ResidentManager.h"
#include <stdexcept>

std::string ResidentManager::surnameAtTheAddress(const Address& address) const {
    for (const Resident& resident : m_residents) {
        for (const Address& addr : resident.m_addresses) {
            if (addr.m_street == address.m_street &&
                addr.m_houseNumber == address.m_houseNumber &&
                addr.m_flatNumber == address.m_flatNumber) {
                return resident.getSurname();
            }
        }
    }
    throw std::runtime_error("No residents with this address.");
}