#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "Test ScavTrap\n";
	ScavTrap scav("scav");
	scav.attack("enemy1");
	scav.guardGate();

	std::cout << "\nTest FragTrap\n";
	FragTrap frag("frag");
	frag.attack("enemy2");
	frag.highFivesGuys();

	std::cout << "\nfrag takeDamage\n";
	frag.takeDamage(40);
	std::cout << "\nfrag repaired\n";
	frag.beRepaired(20);

	return 0;
}
