/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Quadruped.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:00:37 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:47:03 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Quadruped.class.hpp"

// Default name : Unnamed Quadruped
// The 4 Leg objects are automatically constructed here
Quadruped::Quadruped(void) : _name("Unnamed Quadruped")
{
	std::cout << "Quadruped : Default constructor called" << std::endl;
	return ;
}

Quadruped::Quadruped(std::string const &name) : _name(name)
{
	std::cout << "Quadruped : Parametric constructor called with ";
	std::cout << this->_name << std::endl;
	return ;
}

Quadruped::Quadruped(Quadruped const &src)
{
	std::cout << "Quadruped : Copy constructor called with ";
	std::cout << src._name << std::endl;
	*this = src;
	return ;
}

// The 4 Leg objects are automatically destructed here
Quadruped::~Quadruped(void)
{
	std::cout << "Quadruped : Destructor called with ";
	std::cout << this->_name << std::endl;
	return ;
}

void	Quadruped::run(void)
{
	std::cout << this->_name << " runs on " << 4 << " legs" << std::endl;
	return ;
}

void	Quadruped::identify(void) const
{
	std::cout << "This quadruped is named " << this->_name << std::endl;
	return ;
}

std::string	Quadruped::getName(void) const
{
	return (this->_name);
}

Quadruped	&Quadruped::operator=(Quadruped const &rhs)
{
	int	i;

	std::cout << "Quadruped : Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		i = 0;
		while (i < 4)
		{
			this->legs[i] = rhs.legs[i];
			i++;
		}
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Quadruped const &i)
{
	o << "(Quadruped) : The value of _name is : " << i.getName();
	return (o);
}
