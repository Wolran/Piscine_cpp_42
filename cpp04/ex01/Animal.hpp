/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:04:44 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:12:43 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string	const &getType() const;
		Animal(Animal const&);
		Animal &operator = (Animal const&);
};

#endif