#include "FragTrap.hpp"

int main() {
	std::cout << "=== constructor test ===" << std::endl;
	FragTrap a("Monte Cristo");
	FragTrap b("Mercedes");

	std::cout << "\n=== copy constructor test ===" << std::endl;
	FragTrap c(a);

	std::cout << "\n=== copy assignment operator test ===" << std::endl;
	b = a;

	std::cout << "\n=== attack() test ===" << std::endl;
	a.attack("Mercedes");

	std::cout << "\n=== takeDamage() test ===" << std::endl;
	b.takeDamage(3);

	std::cout << "\n=== beRepaired() test ===" << std::endl;
	b.beRepaired(2);

	std::cout << "\n=== highFivesGuys() test ===" << std::endl;
	a.highFivesGuys();

	std::cout << "\n=== destructor test ===" << std::endl;
	return 0;
}