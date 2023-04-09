/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:11:57 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/09 19:14:55 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


	Fixed::Fixed() : _value(0) 
	{
		std::cout << "Default constructor called" << std::endl;
	}
	
	Fixed::Fixed(const Fixed& other) : _value(other._value) 
	{
		std::cout << "Copy constructor called" << std::endl;
	}
	
	Fixed& Fixed::operator=(const Fixed& other) 
	{
		if (this != &other)
		{
			std::cout << "Copy assignment operator called" << std::endl;
			_value = other.getRawBits();
		}
		return *this;
	}
	
	Fixed::~Fixed() 
	{
		std::cout << "Destructor called" << std::endl;
	}
	
	int Fixed::getRawBits() const
	{ 
		std::cout << "getRawBits member function called" << std::endl;
		return _value;
	}
	
	void Fixed::setRawBits(int const raw) 
	{
		_value = raw;
	}

