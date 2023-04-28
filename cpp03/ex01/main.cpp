/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:23:32 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/19 20:54:20 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ClapTrap c1("awesome");
	ScavTrap s1("hey");

	std::cout << std::endl;
	s1.attack(c1.name());
	c1.takeDamage(s1.attackDamage());
	std::cout << std::endl;
	c1.attack(s1.name());
	s1.takeDamage(c1.attackDamage());
	std::cout << std::endl;
	c1.takeDamage(12);
	s1.takeDamage(5);
	std::cout << std::endl;
	c1.beRepaired(5);
	s1.beRepaired(5);
	std::cout << std::endl;
	s1.guardGate();
	std::cout << std::endl;

	return 0;
}