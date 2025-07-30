#pragma once

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

public:
	// Constructor y destructor
	ClapTrap(const std::string& initName);
	~ClapTrap();

	// Constructor por copia y operador de asignación
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);

	// Métodos
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};