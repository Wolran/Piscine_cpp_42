/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/15 15:23:29 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{  
	std::string str = "";
	int i = 0;
	PhoneBook P;
	P.nombre = 0;
	while (1)
	{
		i = i & 7;
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			std::cout << "nom: "; 
			std::getline(std::cin, str);
			P.repertoire[i].nom = str;
			std::cout << "prenom: "; 
			std::getline(std::cin, str);
			P.repertoire[i].prenom = str;
			std::cout << "surnom: "; 
			std::getline(std::cin, str);
			P.repertoire[i].surnom = str;
			std::cout << "phone number: "; 
			std::getline(std::cin, str);
			P.repertoire[i].phone = str;
			std::cout << "secret: "; 
			std::getline(std::cin, str);
			P.repertoire[i].secret = str;
			std::cout << "le contact " << P.repertoire[i++].surnom << " a bien été créer" << std::endl;
			if (P.nombre < 8)
				P.nombre++;
		}
		else if (str == "SEARCH")
		{
			for (int j = 0; j < P.nombre; j++)
				std::cout << "|" << j + 1 << "|" << P.repertoire[j].nom << "|" << P.repertoire[j].prenom << "|" << P.repertoire[j].surnom << std::endl;
			std::cout << "pour choisir un contact veuillez entrer son num" << std::endl;
			std::getline(std::cin, str);
			while (str > "8" || str < "0")
			{
				std::cout << "veuillez choisir un nombre entre dans le tableau" << std::endl;
				std::getline(std::cin, str);
			}
			
		}
		else if (str == "EXIT")
			return 0;
		else 
			std::cout << "les commandes possibles sont : ADD / SEARCH / EXIT" << std::endl;
	}
	return 0;
}