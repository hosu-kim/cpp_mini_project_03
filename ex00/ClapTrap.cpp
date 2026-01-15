#include "ClapTrap.hpp"

// Orthodox canonical form
// vvv default constructor
ClapTrap::ClapTrap(): name(""), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "Default constructor called" << std::endl;
}

// vvv constructor with parameter
ClapTrap::ClapTrap(const std::string& name): name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "String constructor called" << std::endl;
}

// vvv copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other; // copy assignment operator called.
}

// vvv copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
// ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
void ClapTrap::attack(const std::string& target) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << attack_damage << " points of damage!" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points" << std::endl;
		hit_points += amount;
		energy_points--;
	}
}
