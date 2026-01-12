#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy points left to attack!" << std::endl;
		return;
	}
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no hit points left to attack!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already destroyed!" << std::endl;
		return;
	}
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy points left to be repaired!" << std::endl;
		return;
	}
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't be repaired because it has no hit points left!" << std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}
