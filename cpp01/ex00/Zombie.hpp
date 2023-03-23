/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 05:31:23 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/23 04:43:14 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private : 
		std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		void AnnonceZombie(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif