#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string name; // TASK 1-4
		int hit_points; // represents the health of the ClapTrap.
		int energy_points;
		int attack_damage;
		// C++98에서는 멤버 변수 선언과 초기화 동시 불가능

	public:
		// Orthodox canonical form
		ClapTrap(); // constructor
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other); // copy constructor
		// vvv copy assignment operator
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap(); // destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif