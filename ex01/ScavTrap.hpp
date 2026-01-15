#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
		std::string name;


	public:
		ScavTrap();
		// 함수에 값을 전달할 때 보통 문자열을 바로 전달할 텐데
		// 임시 객체라서 const를 쓰지 않으면 에러남. ScavTrap("Bab");
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};

#endif