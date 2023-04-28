/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:17:10 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:43:29 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor." << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain Copy constructor." << std::endl;
	*this = copy;
}

Brain &Brain::operator = (Brain const &to_set)
{
	std::cout << "Brain Assignation constructor." << std::endl;
	for (int i = 0; i < 100 && !to_set.ideas[i].empty(); i++)
		this->ideas[i] = to_set.ideas[i];
	return (*this);
}
