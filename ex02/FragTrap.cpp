#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap string constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	ClapTrap::operator=(other); //operator=는 함수임.
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	std::cout << "FragTrap " << name << " attacks " << target << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}