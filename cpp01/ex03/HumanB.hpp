/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:04:08 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/03 17:50:35 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon* arme;
	public:
		HumanB(std::string arme);
		~HumanB(void);
		void setWeapon(Weapon& arme);
		void attack(void);
};

#endif