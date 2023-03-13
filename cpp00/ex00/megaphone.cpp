/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:54:00 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/13 03:03:10 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int arc, char **arv)
{
	if (arc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < arc; i++)
		{
			for (int j = 0; j < (int)strlen(arv[i]); j++)
				std::cout << (char)toupper(arv[i][j]);
		}
		std::cout << std::endl;
	}
	return 0;
}
