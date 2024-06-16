#pragma once
#include <vector>
#include <string>
#include "Resident.h"

class ResidentManager {
public:
    static ResidentManager& getInstance() {
        static ResidentManager instance;
        return instance;
    }

    void addResident(const Resident& resident) {
        m_residents.push_back(resident);
    }

    const std::vector<Resident>& getResidents() const {
        return m_residents;
    }

    std::string surnameAtTheAddress(const Address& address) const;

private:
    ResidentManager() = default;
    std::vector<Resident> m_residents;
};