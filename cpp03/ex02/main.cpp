/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:23:32 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/27 16:57:54 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap f1("awesome");
	ScavTrap s1("hey");

	std::cout << std::endl;
	s1.attack(f1.name());
	f1.takeDamage(s1.attackDamage());
	std::cout << std::endl;
	f1.attack(s1.name());
	s1.takeDamage(f1.attackDamage());
	std::cout << std::endl;
	f1.takeDamage(12);
	s1.takeDamage(5);
	std::cout << std::endl;
	f1.beRepaired(5);
	s1.beRepaired(5);
	std::cout << std::endl;
	s1.guardGate();
	f1.highFivesGuys();
	std::cout << std::endl;

	return 0;
}