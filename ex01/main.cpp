#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap robot("robot");

	std::cout << "\nTesting attack:\n";
	robot.attack("target1");

	std::cout << "\nTesting guardGate:\n";
	robot.guardGate();

	std::cout << "\nTesting damage and repair:\n";
	robot.takeDamage(30);
	robot.beRepaired(20);

	std::cout << "\nEnd of main.\n";
	return 0;
}
