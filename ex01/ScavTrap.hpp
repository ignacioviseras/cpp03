/*
	Because you can never have enough ClapTraps, you will now create a derived robot.
	It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor, and attack() will print different messages.
	After all, ClapTraps are aware of their individuality.
	Note that proper construction/destruction chaining must be shown in your tests.
	When a ScavTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in reverse order. Why?
	ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and
	must initialize them to:
	• Name, which is passed as a parameter to the constructor
	• Hit points (100), representing the health of the ClapTrap
	• Energy points (50)
	• Attack damage (20)
	ScavTrap will also have its own special ability:
	void guardGate();
	This member function will display a message indicating that ScavTrap is now in Gate
	keeper mode.
	Don’t forget to add more tests to your program.
-----------
	Como nunca puedes tener suficientes ClapTraps, ahora crearás un robot derivado.
	Se llamará ScavTrap y heredará los constructores y destructores de ClapTrap.
	Sin embargo, sus constructores, destructor y attack() imprimirán mensajes diferentes.
	Después de todo, los ClapTraps son conscientes de su individualidad.
	Tenga en cuenta que en sus pruebas se debe mostrar el encadenamiento adecuado de construcción/destrucción.
	Cuando se crea un ScavTrap, el programa comienza construyendo un ClapTrap. La destrucción ocurre en orden inverso. ¿Por qué?
	ScavTrap utilizará los atributos de ClapTrap (actualizará ClapTrap en consecuencia) y
	debe inicializarlos para:
	• Nombre, que se pasa como parámetro al constructor.
	• Puntos de vida (100), que representan la salud del ClapTrap.
	• Puntos de energía (50)
	• Daño de ataque (20)
	ScavTrap también tendrá su propia habilidad especial:
	puerta de guardia vacía();
	Esta función miembro mostrará un mensaje indicando que ScavTrap ahora está en Gate
	Modo guardián.
	No olvide agregar más pruebas a su programa.
*/
#pragma once

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};