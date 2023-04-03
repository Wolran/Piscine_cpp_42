/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 05:38:02 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/23 05:38:15 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString;
    std::string& stringREF = myString;

    // Affichage des adresses en mémoire
    std::cout << "Adresse de la string en memoire : " << &myString << std::endl;
    std::cout << "Adresse stockee dans stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF : " << &stringREF << std::endl;

    // Affichage des valeurs de la string
    std::cout << "Valeur de la string : " << myString << std::endl;
    std::cout << "Valeur pointee par stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur pointee par stringREF : " << stringREF << std::endl;

    return 0;
}