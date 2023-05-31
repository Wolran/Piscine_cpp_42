/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:11:36 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/31 16:32:02 by vmuller          ###   ########.fr       */
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
	t_type complain_function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string input_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int x = 0; x < 4 ; x++)
    {
        if (level == input_lvl[x])
        {
            (this->*(complain_function[x].f))();
            return ;
        }
    }
    std::cout << "Invalid complaint level" << std::endl;
}
