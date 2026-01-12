#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Berk");
    ClapTrap claptrap_2("Can");

    std::cout << "\n--- Test 1: Normal Use ---" << std::endl;
    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << "\n--- Test 2: Dead (0 HP) ---" << std::endl;
    claptrap.takeDamage(10);
    claptrap.attack("Enemy");
    claptrap.beRepaired(5);
    claptrap.takeDamage(1);

    std::cout << "\n--- Test 3: Energy Depletion ---" << std::endl;
    for (int i = 0; i < 12; i++)
        claptrap_2.attack("Clone");

    std::cout << "\n--- Destructor ---" << std::endl;
    return 0;
}
