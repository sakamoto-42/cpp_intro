/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tap.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:05:54 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:07:58 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Tap.class.hpp"

Tap::Tap(void)
{
	std::cout << "Tap ready for action !" << std::endl;
	return ;
}

Tap::Tap(Tap const &src) : IWaterSource()
{
	std::cout << "Tap : Copy constructor called" << std::endl;
	return ;
}

Tap::~Tap(void)
{
	std::cout << "Tap : Destructor called" << std::endl;
	return ;
}

Tap &Tap::operator=(Tap const &rhs)
{
	std::cout << "Tap : Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		
	}
	return (*this);
}

int	Tap::getWater(int amount)
{
	std::cout << "Tap : providing " << amount << "ml of water" << std::endl;
	return (amount);
}

std::string	Tap::getType(void) const
{
	return "Tap";
}

std::ostream	&operator<<(std::ostream &o, IWaterSource const &i)
{
	o << i.getType();
	return (o);
}
