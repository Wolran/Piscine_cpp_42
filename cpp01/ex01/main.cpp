/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 05:30:41 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/29 22:42:07 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num = atoi(argv[1]);
		Zombie *Zombies = zombieHorde(num, argv[2]);
		for (int i = 0; i < num; i++)
		{
			std::cout << i << " ";
			Zombies[i].AnnonceZombie();
		}
		delete[] Zombies;
	}
	else
		std::cout << "./Zombies \"number\" \"name\"" << std::endl;
	return 0;
}