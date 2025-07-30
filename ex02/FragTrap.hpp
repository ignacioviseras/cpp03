#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	// Constructor, copy constructor, assignment operator, destructor
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	// Métodos
	void attack(const std::string& target);
	void highFivesGuys();
};


/*
	Making ClapTraps is probably starting to get on your nerves.
	Now, implement a FragTrap class that inherits from ClapTrap. It is very similar to
	ScavTrap. However, its construction and destruction messages must be different. Proper
	construction/destruction chaining must be shown in your tests. When a FragTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in reverse order.
	Same goes for the attributes, but with different values this time:
	• Name, which is passed as a parameter to the constructor
	• Hit points (100), representing the health of the ClapTrap
	• Energy points (100)
	• Attack damage (30)
	FragTrap has a special ability too:
	void highFivesGuys(void);
	This member function displays a positive high-fives request on the standard output.
	Again, add more tests to your program
------------------------
	Probablemente hacer ClapTraps esté empezando a ponerte de los nervios.
	Ahora, implemente una clase FragTrap que hereda de ClapTrap. Es muy parecido a
	ScavTrap. Sin embargo, sus mensajes de construcción y destrucción deben ser diferentes. Adecuado
	El encadenamiento de construcción/destrucción debe mostrarse en sus pruebas.
	Cuando se crea un FragTrap, el programa comienza construyendo un ClapTrap. La destrucción ocurre en orden inverso.
	Lo mismo ocurre con los atributos, pero esta vez con valores diferentes:
	• Nombre, que se pasa como parámetro al constructor.
	• Puntos de vida (100), que representan la salud del ClapTrap.
	• Puntos de energía (100)
	• Daño de ataque (30)
	FragTrap también tiene una habilidad especial:
	void highFivesGuys(void);
	Esta función miembro muestra una solicitud positiva de choca esos cinco en la salida estándar.
	Nuevamente, agregue más pruebas a su programa.
*/