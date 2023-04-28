/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:02:08 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:05:43 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\t----" << std::endl;

	const WrongAnimal *wrongmeta = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	const WrongCat *cat = new WrongCat();

	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	wrongmeta->makeSound();
	wrongcat->makeSound();
	cat->makeSound();

	delete wrongmeta;
	delete wrongcat;
	delete cat;

	return 0;
}