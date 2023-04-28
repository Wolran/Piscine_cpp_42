/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:23:32 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/10 14:59:15 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1;
	ClapTrap c2("awesome");

	std::cout << std::endl;
	c1.attack(c2.name());
	c2.takeDamage(c2.attackDamage());
	std::cout << std::endl;
	c2.attack(c1.name());
	c1.takeDamage(c1.attackDamage());
	std::cout << std::endl;
	c1.takeDamage(12);
	c2.takeDamage(5);
	std::cout << std::endl;
	c1.beRepaired(5);
	c2.beRepaired(5);
	std::cout << std::endl;

	return 0;
}