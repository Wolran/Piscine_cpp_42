/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:11:57 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/09 19:11:50 by vmuller          ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
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

float Fixed::toFloat() const 
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt() const 
{
    return _value >> _fractionalBits;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    if (this != &fixed)
    {
		std::cout << "Copy assignment operator called" << std::endl;
        _value = fixed._value;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}