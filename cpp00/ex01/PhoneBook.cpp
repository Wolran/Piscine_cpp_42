/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:24 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_index = -1;
	_nbContacts = 0;
	return ;
}

PhoneBook::~PhoneBook(void){}

void PhoneBook::addContact(void)
{
	_index++;
	if (_index >= MAX_NB_CONTACT)
		_index = 0;
	_contacts[_index].fillContactInfos();
	if (_nbContacts < MAX_NB_CONTACT)
		_nbContacts++;
}

void PhoneBook::searchContact(void) const
{
	std::string	indexStr;
	int			indexInt;
	
	if (_index == -1)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < _nbContacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_contacts[i].displayShortContactInfo();
	}
	
	indexInt = -1;
	while (indexInt < 0 || indexInt >= _nbContacts)
	{
		std::cout << "Enter the index of the contact to display: ";
		std::getline(std::cin, indexStr);
		if (!arg_is_digit(indexStr) || !arg_is_int(indexStr))
			std::cout << "You must type in an integer." << std::endl;
		else
			indexInt = ft_atoi(indexStr);
	}
	_contacts[indexInt].displayFullContactInfo();
}
