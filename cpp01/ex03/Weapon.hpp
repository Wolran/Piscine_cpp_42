/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:04:05 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/03 17:26:29 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private:
		std::string name;
		
	public:
		Weapon(std::string arme);
		~Weapon(void); 
		std::string& getType(void);
		void setType(std::string name);
};

#endif