/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Espresso.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:42:19 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:07:00 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Espresso.class.hpp"

Espresso::Espresso(void)
{
	std::cout << "Espresso : A delicious espresso is ready !" << std::endl;
	return ;
}

Espresso::Espresso(Espresso const &src) : ICoffee()
{
	std::cout << "Espresso : Copy constructor called" << std::endl;
	return ;
}

Espresso::~Espresso(void)
{
	std::cout << "Espresso : This expresso was delicious" << std::endl;
	return ;
}

Espresso &Espresso::operator=(Espresso const &rhs)
{
	std::cout << "Espresso : Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		
	}
	return (*this);
}

std::string	Espresso::getType(void) const
{
	return ("espresso");
}

std::ostream	&operator<<(std::ostream &o, ICoffee const &i)
{
	o << i.getType();
	return (o);
}
