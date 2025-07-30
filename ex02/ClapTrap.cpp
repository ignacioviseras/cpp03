#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(const std::string& initName)
	: name(initName), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " constructed.\n";
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructed.\n";
}

// Constructor por copia
ClapTrap::ClapTrap(const ClapTrap& other)
	: name(other.name), hitPoints(other.hitPoints),
	  energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << name << " copied.\n";
}

// Operador de asignación
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " assigned.\n";
	return *this;
}

// Métodos
void ClapTrap::attack(const std::string& target) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		std::cout << "ClapTrap " << name << " cannot attack. No hit points or energy left.\n";
		return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
	          << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "ClapTrap " << name << " is already destroyed.\n";
		return;
	}
	hitPoints -= amount;
	if (hitPoints < 0) hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage. "
	          << "Remaining hit points: " << hitPoints << ".\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints <= 0 || energyPoints <= 0) {
		std::cout << "ClapTrap " << name << " cannot repair itself. No hit points or energy left.\n";
		return;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself, recovering "
	          << amount << " hit points. Total hit points: " << hitPoints << ".\n";
}
