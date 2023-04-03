/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:56:46 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/03 18:06:17 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int arc, char **arv)
{
	if (arc != 4)
	{
		std::cout << "error nombre d'arg != 3" << std::endl;
		return 1;
	}
	std::string s0 = arv[1];
	std::string s1 = arv[2];
	std::string s2 = arv[3];
	if (s0 == "" || s1 == "" || s2 == "" || s1 == s2) 
	{
		std::cout << "error mauvaise entrée" << std::endl;
		return 2;
	}
	//je sais pas comment faire rip
}