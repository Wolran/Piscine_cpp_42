/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:11:36 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/29 22:54:36 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) 
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void) 
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) 
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) 
{
 	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
 {
	void (Harl::*func_ptr)(void);
	if (level == "DEBUG") {
	    func_ptr = &Harl::debug;
	}
	else if (level == "INFO") {
	    func_ptr = &Harl::info;
	}
	else if (level == "WARNING") {
	    func_ptr = &Harl::warning;
	}
	else if (level == "ERROR") {
	    func_ptr = &Harl::error;
	}
	else {
	    std::cout << "Invalid complaint level" << std::endl;
	    return;
	}
	(this->*func_ptr)();
}