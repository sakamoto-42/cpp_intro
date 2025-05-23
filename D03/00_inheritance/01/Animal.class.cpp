/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:13:34 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:44:08 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"

Animal::Animal(void) : _numberOfLegs(0)
{
	std::cout << "Animal : Default constructor called with ";
	std::cout << this->_numberOfLegs << std::endl;
	return ;
}

Animal::Animal(int const n) : _numberOfLegs(n)
{
	std::cout << "Animal : Parametric constructor called with ";
	std::cout << n << " legs" << std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
		this->_numberOfLegs = rhs.getNumberOfLegs();
	return (*this);
}

void	Animal::run(int distance)
{
	std::cout << "run " << distance << " meters" << std::endl;
	return ;
}

void	Animal::eat(std::string const &what)
{
	std::cout << "eat " << what << std::endl;
	return ;
}

void	Animal::walk(int distance)
{
	std::cout << "walk " << distance << " meters" << std::endl;
	return ;
}

int		Animal::getNumberOfLegs(void) const
{
	return (this->_numberOfLegs);
}

std::ostream	&operator<<(std::ostream &o, Animal const &i)
{
	o << "(Animal) : The value of _numberOfLegs is : " << i.getNumberOfLegs();
	return (o);
}
