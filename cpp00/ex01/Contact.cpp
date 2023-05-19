/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:24 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void Contact::fillContactInfos(void)
{
	int empty = 1;
	std::cout << "Please fill contact information" << std::endl;
	while (empty)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, _firstName);
		std::cout << "Last Name: ";
		std::getline(std::cin, _lastName);
		std::cout << "Nickname: ";
		std::getline(std::cin, _nickname);
		std::cout << "Phone Number: ";
		std::getline(std::cin, _phoneNumber);
		std::cout << "Darkest secret: ";
		std::getline(std::cin, _darkestSecret);

		if (!_firstName.empty() && !_lastName.empty() && !_nickname.empty() && !_phoneNumber.empty() && !_darkestSecret.empty())
			empty = 0;
		else
			std::cout << "One of the fields has been left empty, please fill contact information again." << std::endl;
	}
}

std::string truncIfTooLong(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str.substr(0, 10);
}

void Contact::displayShortContactInfo(void) const
{
	std::cout << std::setw(10) << truncIfTooLong(_firstName) << "|";
	std::cout << std::setw(10) << truncIfTooLong(_lastName) << "|";
	std::cout << std::setw(10) << truncIfTooLong(_nickname) << std::endl;
}

void Contact::displayFullContactInfo(void) const
{
	std::cout << "first name: " << _firstName << std::endl;
	std::cout << "last name: " << _lastName << std::endl;
	std::cout << "nickname: " << _nickname << std::endl;
	std::cout << "phone number: " << _phoneNumber << std::endl;
	std::cout << "darkest secret: " << _darkestSecret << std::endl;
}