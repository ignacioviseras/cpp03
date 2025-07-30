#pragma once

#include <iostream>
#include <string>

class ClapTrap {
private:
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

/*
	First, you have to implement a class! How original!
	It will be called ClapTrap and will have the following private attributes initialized
	to the values specified in brackets:
	• Name, which is passed as a parameter to the constructor
	• Hit points (10), representing the health of the ClapTrap
	• Energy points (10)
	• Attack damage (0)
	Add the following public member functions so that the ClapTrap behaves more realistically:
	• void attack(const std::string& target);
	• void takeDamage(unsigned int amount);
	• void beRepaired(unsigned int amount);
	When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
	When ClapTrap repairs itself, it regains <amount> hit points. Attacking and repairing
	each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or
	energy points left. However, since these exercises serve as an introduction, the ClapTrap
	instances should not interact directly with one another, and the parameters will not refer
	to another instance of ClapTrap.

	In all of these member functions, you need to print a message to describe what happens
	For example, the attack() function may display something like (of course, without
	the angle brackets):
	ClapTrap <name> attacks <target>, causing <damage> points of damage!
	The constructors and destructor must also display a message, so your peer-evaluators
	can easily see that they have been called.
	Implement and turn in your own tests to ensure your code works as expected

*/