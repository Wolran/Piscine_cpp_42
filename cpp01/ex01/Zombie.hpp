/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 05:31:23 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/23 05:28:37 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private : 
		std::string name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void SetNameZom(std::string name);
		void AnnonceZombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif