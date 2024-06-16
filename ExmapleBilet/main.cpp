#include <iostream>
#include "Resident.h"
#include "Address.h"
#include "ResidentManager.h"

int main() {
    Resident resident1("Ivanov", "Main Street", 123, 45);
    Resident resident2("Petrov", "Second Street", 67, 89);

    Address address1("Main Street", 123, 45);
    try {
        std::cout << "Surname at the address: " << ResidentManager::getInstance().surnameAtTheAddress(address1) << std::endl;
    }
    catch (const std::runtime_error& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    // Проверка списка всех жителей
    const std::vector<Resident>& residents = ResidentManager::getInstance().getResidents();
    for (const Resident& resident : residents) {
        std::cout << "Resident: " << resident.getSurname() << " at " << resident.getStreet() << std::endl;
    }

    return 0;
}