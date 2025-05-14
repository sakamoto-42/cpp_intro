/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:18:08 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 16:22:47 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int		main(void)
{
	std::string	str;

	str = "I like butterflies";
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	return (0);
}