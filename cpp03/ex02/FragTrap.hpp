/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:32:48 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/27 16:40:12 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap(std::string name = "default");
		FragTrap(const FragTrap& src);
		~FragTrap();
		FragTrap& operator=(const FragTrap& other);	
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif