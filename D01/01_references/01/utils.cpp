/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:18:08 by julien            #+#    #+#             */
/*   Updated: 2025/05/15 13:32:10 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "utils.hpp"

void	byPtr(std::string *str)
{
	*str += " and ponies";
	return ;
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
	return ;
}

void	byRef(std::string &str)
{
	str += " and ponies";
	return ;
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
	return ;
}
