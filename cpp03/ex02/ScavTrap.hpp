/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:24:55 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/19 21:00:33 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(std::string name = "default");
		ScavTrap(const ScavTrap& src);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);	
		void attack(const std::string& target);
		void guardGate();
};

#endif