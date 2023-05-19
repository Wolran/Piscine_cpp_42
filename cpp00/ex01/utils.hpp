/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 05:42:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:15 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

# include <string>

int	arg_is_int(std::string arg);
int	arg_is_digit(std::string arg);
int	ft_atoi(std::string nptr);

#endif