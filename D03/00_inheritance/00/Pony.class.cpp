/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:49:02 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 14:00:47 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.class.hpp"

Pony::Pony(void) : _numberOfLegs(4)
{
	std::cout << "Pony : Default constructor called" << std::endl;
	return ;
}

Pony::Pony(Pony const &src)
{
	std::cout << "Pony : Copy constructor called with value ";
	std::cout << src.getNumberOfLegs() << std::endl;
	*this = src;
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

Pony	&Pony::operator=(Pony const &rhs)
{
	std::cout << "Pony : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
		this->_numberOfLegs = rhs.getNumberOfLegs();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Pony const &i)
{
	o << "Pony : The value of _numberOfLegs is : " << i.getNumberOfLegs();
	return (o);
}
