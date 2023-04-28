/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:02:08 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:24:51 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animal_array[100];

	for (int i = 0; i < 50; i++)
		animal_array[i] = new Cat();

	std::cout << "\t----\n";

	for (int i = 0; i < 50; i++)
		animal_array[i]->makeSound();

	std::cout << "\t----\n";

	for (int i = 50; i < 100; i++)
		animal_array[i] = new Dog();

	std::cout << "\t----\n";

	for (int i = 50; i < 100; i++)
		animal_array[i]->makeSound();

	std::cout << "\t----\n";

	for (int i = 0; i < 100; i++)
		delete animal_array[i];
	
}