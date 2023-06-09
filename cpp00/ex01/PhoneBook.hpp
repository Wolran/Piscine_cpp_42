/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:24 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include "utils.hpp"

# define MAX_NB_CONTACT 8

class PhoneBook
{
private:
	Contact	_contacts[MAX_NB_CONTACT];
	int		_index;
	int		_nbContacts;
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void addContact(void);
	void searchContact(void) const;
};


#endif