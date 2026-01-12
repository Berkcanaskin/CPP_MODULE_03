#include "FragTrap.hpp"

int main()
{
    FragTrap fragtrap("Berkcan");

    std::cout << "\n--- Test 1: FragTrap Attack ---" << std::endl;
    fragtrap.attack("Target Dummy");

    std::cout << "\n--- Test 2: High Fives ---" << std::endl;
    fragtrap.highFivesGuys();

    std::cout << "\n--- Test 3: Damage and Repair ---" << std::endl;
    fragtrap.takeDamage(30);
    fragtrap.beRepaired(20);

    std::cout << "\n--- Desructor ---" << std::endl;
    return 0;
}
