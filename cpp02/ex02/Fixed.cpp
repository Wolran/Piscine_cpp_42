/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:11:57 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/09 19:39:37 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : _value(0) {}
	
Fixed::Fixed(const Fixed& other) : _value(other._value) {}

Fixed::Fixed(const int value)
{
    _value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const
{ 
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


bool Fixed::operator>(const Fixed& other) const 
{
    return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const 
{
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const 
{
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const 
{
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const 
{
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const 
{
    return _value != other._value;
}

Fixed Fixed::operator+(const Fixed& other) const 
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const 
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    this->_value += 1 << _fractionalBits;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    this->_value -= 1 << _fractionalBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --(*this);
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}