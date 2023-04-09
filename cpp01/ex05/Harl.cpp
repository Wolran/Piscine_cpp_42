/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:11:36 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/09 12:42:26 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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