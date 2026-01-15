#include "ClapTrap.hpp"

int main() {
	std::cout << "=== constructor test ===" << std::endl;
	ClapTrap a("Monte Cristo");
	ClapTrap b("Mercedes");
	ClapTrap c(a);

	std::cout << "\n=== attack() test ===" << std::endl;
	a.attack("Mercedes");

	std::cout << "\n=== takeDamage() test ===" << std::endl;
	b.takeDamage(3);

	std::cout << "\n=== beRepaired() test" << std::endl;
	b.beRepaired(2);

	std::cout << "\n=== destructor test ===" << std::endl;
	return 0;
}