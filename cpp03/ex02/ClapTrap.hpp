/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:23:28 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/19 20:48:11 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected: 
		std::string Name;
		int points;
		int energie;
		int damage;
	
	public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	ClapTrap& operator=(const ClapTrap &other);
	const std::string& name() const;
	int attackDamage() const;
};

#endif