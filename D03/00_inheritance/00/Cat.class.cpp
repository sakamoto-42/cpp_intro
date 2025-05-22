/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:23:03 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 14:12:29 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"

Cat::Cat(void) : _numberOfLegs(4)
{
	std::cout << "Cat : Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat : Copy constructor called with value ";
	std::cout << src.getNumberOfLegs() << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called" << std::endl;
	return ;
}

void	Cat::run(int distance)
{
	std::cout << "run " << distance << " meters" << std::endl;
}

void	Cat::scornSomeone(std::string const &target)
{
	std::cout << "scorn " << target << std::endl;
}

int	Cat::getNumberOfLegs(void) const
{
	return (this->_numberOfLegs);
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
		this->_numberOfLegs = rhs.getNumberOfLegs();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Cat const &i)
{
	o << "Cat : The value of _numberOfLegs is : " << i.getNumberOfLegs();
	return (o);
}
