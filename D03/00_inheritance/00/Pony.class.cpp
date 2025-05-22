/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:49:02 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:50:31 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.class.hpp"

Pony::Pony(void) : _numberOfLegs(4)
{
	std::cout << "Pony : Default constructor called" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony : Destructor called" << std::endl;
	return ;
}

void	Pony::run(int distance)
{
	std::cout << "run " << distance << " meters" << std::endl;
}

void	Pony::doMagic(std::string const &target)
{
	std::cout << "do magic on " << target << std::endl;
}

int	Pony::getNumberOfLegs(void) const
{
	return (this->_numberOfLegs);
}
