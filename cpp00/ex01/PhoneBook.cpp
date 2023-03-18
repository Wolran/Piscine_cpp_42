/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/18 04:15:00 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void if_exit(std::string str)
{
	if (str == "EXIT")
			exit(0);
}

int main(void)
{  
	std::string str = "";
	int i = 0;
	PhoneBook P;
	P.nombre = 0;
	int flag = 0;
	std::cout << "les commandes possibles sont : ADD / SEARCH / EXIT" << std::endl;
	while (1)
	{
		i = i % 8;
		std::cout << "Phone > ";
		std::getline(std::cin, str);
		if_exit(str);
		if (str == "ADD")
		{
			std::cout << "fist name: "; 
			std::getline(std::cin, str);
			P.repertoire[i].nom = str;
			std::cout << "last name: "; 
			std::getline(std::cin, str);
			P.repertoire[i].prenom = str;
			std::cout << "nickname: "; 
			std::getline(std::cin, str);
			P.repertoire[i].surnom = str;
			std::cout << "phone number: "; 
			std::getline(std::cin, str);
			P.repertoire[i].phone = str;
			std::cout << "darkest secret: ";
			std::getline(std::cin, str);
			P.repertoire[i].secret = str;
			std::cout << "le contact " << P.repertoire[i++].surnom << " à bien été enregistré" << std::endl;
			if (P.nombre < 8)
				P.nombre++;
			flag = 1;
		}
		else if (str == "SEARCH" && flag != 0)
		{
			for (int j = 0; j < P.nombre; j++)
			{
				std::cout << "|" << j + 1;
				if (P.repertoire[j].nom.length() >= 10)
					std::cout << "|" << P.repertoire[j].nom.substr(0, 9) << ".";
				else
					std::cout << "|" << std::setw(10) << P.repertoire[j].nom;
				if (P.repertoire[j].prenom.length() >= 10)
					std::cout << "|" << P.repertoire[j].prenom.substr(0, 9) << ".";
				else
					std::cout << "|" << std::setw(10) << P.repertoire[j].prenom;
				if (P.repertoire[j].surnom.length() >= 10)
					std::cout << "|" << P.repertoire[j].surnom.substr(0, 9) << "." << "|" << std::endl;
				else
					std::cout << "|" << std::setw(10) << P.repertoire[j].surnom << "|" << std::endl;
			}
			std::cout << "veuillez choisir le numéro du contact dans le tableau" << std::endl;
			std::cout << "Phone > ";
			std::getline(std::cin, str);
			if_exit(str);
			int len = std::atoi(str.c_str());
			while (len > P.nombre || len < 1)
			{
				std::cout << "ERROR : veuillez choisir le numéro du contact dans le tableau" << std::endl;
				if_exit(str);
				std::cout << "Phone > ";
				std::getline(std::cin, str);
				len = std::atoi(str.c_str());
			}
			std::cout << "first name: " << P.repertoire[len - 1].nom << std::endl;
			std::cout << "last name: " << P.repertoire[len - 1].prenom << std::endl;
			std::cout << "nickname: " << P.repertoire[len - 1].surnom << std::endl;
			std::cout << "phone number: " << P.repertoire[len - 1].phone << std::endl;
			std::cout << "darkest secret: " << P.repertoire[len - 1].secret << std::endl;
		}
		else if (str == "SEARCH" && flag == 0)
			std::cout << "ERROR : liste de contact vide" << std::endl;
		else
			std::cout << "les commandes possibles sont : ADD / SEARCH / EXIT" << std::endl;
	}
	return 0;
}

