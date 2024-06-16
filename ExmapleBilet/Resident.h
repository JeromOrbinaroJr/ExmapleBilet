#pragma once
#include <string>
#include <vector>
#include "Address.h"

class Resident {
public:
    // Constructors
    Resident() = default;
    Resident(const std::string& surname, const std::string& street, int houseNumber, int flatNumber);
    Resident(const Resident& other) = default;

    // Destructor
    ~Resident() = default;

    // Getters
    const std::string& getSurname() const;
    const std::string& getStreet() const;
    int getHouseNumber() const;
    int getFlatNumber() const;

    // Setters
    void setSurname(const std::string& surname);
    void setStreet(const std::string& street);
    void setHouseNumber(int houseNumber);
    void setFlatNumber(int flatNumber);

    // Methods
    void addAddress(const Address& address);

    friend class ResidentManager;

private:
    std::string m_surname;
    Address m_address;
    std::vector<Address> m_addresses;
};