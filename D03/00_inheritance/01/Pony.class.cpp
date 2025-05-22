/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:14:46 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:02:48 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.class.hpp"

Pony::Pony(void) : Animal(4)	// Appelle le constructeur d'Animal
{
	std::cout << "Pony : Constructor called" << std::endl;
	return ;
}

// Appelle le constructeur de copie d'Animal
Pony::Pony(Pony const &src) : Animal(src)
{
	std::cout << "Pony : Copy constructor called with value ";
	std::cout << src.getNumberOfLegs() << std::endl;
	return ;
}

// /!\ Appel du destructeur d'Animal automatique
Pony::~Pony(void)
{
	std::cout << "Pony : Destructor called" << std::endl;
	return ;
}

Pony	&Pony::operator=(Pony const &rhs)
{
	std::cout << "Pony : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
	{
		// Appelle l'operateur d'affectation de la classe de base Animal
		Animal::operator=(rhs);
	}
	return (*this);
}

void	Pony::doMagic(std::string const &target)
{
	std::cout << "do magic on " << target << std::endl;
	return ;
}

void	Pony::call(void)
{
	std::cout << "Neigh !" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Pony const &i)
{
	o << "Pony : ";
	// Appelle la surcharge d'operateur << d'Animal
	o << static_cast<const Animal&>(i);
	return (o);
}
