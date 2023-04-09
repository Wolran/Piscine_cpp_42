/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:00:19 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/09 19:39:36 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		
		Fixed& operator=(const Fixed& fixed);
		
		~Fixed();
		
		int getRawBits() const ;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
		
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
    	static Fixed &min(Fixed &a, Fixed &b);
   	 	static Fixed const &min(Fixed const &a, Fixed const &b);
    	static Fixed &max(Fixed &a, Fixed &b);
    	static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif