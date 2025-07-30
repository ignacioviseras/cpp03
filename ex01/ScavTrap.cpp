#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed.\n";
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copied.\n";
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other); // reuse base class assignment
	}
	std::cout << "ScavTrap " << name << " assigned.\n";
	return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructed.\n";
}

// Overridden attack
void ScavTrap::attack(const std::string& target) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		std::cout << "ScavTrap " << name << " cannot attack. No hit points or energy left.\n";
		return;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " viciously attacks " << target
	          << ", causing " << attackDamage << " points of damage!\n";
}

// New ability
void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n";
}
