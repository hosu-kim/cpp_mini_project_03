#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		// 함수에 값을 전달할 때 보통 문자열을 바로 전달할 텐데
		// 임시 객체라서 const를 쓰지 않으면 에러남. ScavTrap("Bab");
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif