/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/19 12:48:53 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	arg_is_digit(std::string arg)
{
	int	i;

	if (arg[0] != '-' && !ft_isdigit(arg[0]))
		return (0);
	i = 1;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const std::string nptr)
{
	int		i;
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\f' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	return (num * sign);
}

int	arg_is_int(std::string arg)
{
	long	num;

	if (arg.length() > 10)
		return (0);
	num = ft_atol(arg);
	if (num <= 2147483647 && num >= -2147483648)
		return (1);
	return (0);
}

int	ft_atoi(std::string nptr)
{
	int	i;
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\f' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	return (num * sign);
}