#include "ClapTrap.hpp"

int main() {
	ClapTrap ct1("robot");

	ct1.attack("Enemy");
	ct1.takeDamage(5);
	ct1.beRepaired(3);
	ct1.takeDamage(20);
	ct1.attack("Another Enemy");
	ct1.beRepaired(10);

	return 0;
}
