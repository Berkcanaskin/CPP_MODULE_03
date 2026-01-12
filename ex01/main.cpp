#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap("Berkcan");

    std::cout << "\n--- Test 1: ScavTrap Attack ---" << std::endl;
    scavtrap.attack("Enemy");

    std::cout << "\n--- Test 2: Guard Gate Mod ---" << std::endl;
    scavtrap.guardGate();

    std::cout << "\n--- Test 3: Damage and Repair ---" << std::endl;
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(20);

    std::cout << "\n--- Destructor ---" << std::endl;
    return 0;
}
