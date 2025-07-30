#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed.\n";
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other) {
	std::cout << "FragTrap " << name << " copied.\n";
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << name << " assigned.\n";
	return *this;
}

// Destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructed.\n";
}

// Overridden attack
void FragTrap::attack(const std::string& target) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		std::cout << "FragTrap " << name << " cannot attack. No hit points or energy left.\n";
		return;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " launches a powerful attack on " << target
	          << ", causing " << attackDamage << " points of damage!\n";
}

// Special ability
void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " requests a positive high five! ✋\n";
}
