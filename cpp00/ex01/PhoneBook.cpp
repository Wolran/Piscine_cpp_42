/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/14 06:43:01 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{
	char str[256];
	int i = 0;
	PhoneBook P;
	while (1)
	{
		i = i & 7;
		std::cin.getline(str, 256);
		if (strcmp("ADD", str) == 0)
		{
			std::cout << "nom: "; 
			std::cin.getline(str, 256);
			P.repertoire[i].nom = str;
			std::cout << "prenom: "; 
			std::cin.getline(str, 256);
			P.repertoire[i].prenom = str;
			std::cout << "surnom: "; 
			std::cin.getline(str, 256);
			P.repertoire[i].surnom = str;
			std::cout << "phone number: "; 
			std::cin.getline(str, 256);
			P.repertoire[i].phone = str;
			std::cout << "secret: "; 
			std::cin.getline(str, 256);
			P.repertoire[i].secret = str;
			std::cout << "le contact " << P.repertoire[i++].surnom << " a bien été créer" << std::endl;
			if (P.nombre < 8)
				P.nombre++;
		}
		else if (strcmp("SEARCH", str) == 0)
		{
			for (int j = 0; j != 1; j++)
				std::cout << "|" << j + 1 << "|" << P.repertoire[j].nom << "|" << P.repertoire[j].prenom << "|" << P.repertoire[j].surnom << std::endl;
		}
		else if (strcmp("EXIT", str) == 0)
			return 0;
		else 
			std::cout << "les commandes possibles sont : ADD / SEARCH / EXIT" << std::endl;
	}
	return 0;
}