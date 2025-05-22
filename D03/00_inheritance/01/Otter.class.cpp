/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Otter.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:14:31 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 15:16:06 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Otter.class.hpp"


Otter::Otter(void) : Animal(4)	// Appelle le constructeur d'Animal
{
	std::cout << "Otter : Constructor called" << std::endl;
	return ;
}

// Appelle le constructeur de copie d'Animal
Otter::Otter(Otter const &src) : Animal(src)
{
	std::cout << "Otter : Copy constructor called with value ";
	std::cout << src.getNumberOfLegs() << std::endl;
	return ;
}

// /!\ Appel du destructeur d'Animal automatique
Otter::~Otter(void)
{
	std::cout << "Otter : Destructor called" << std::endl;
	return ;
}

Otter	&Otter::operator=(Otter const &rhs)
{
	std::cout << "Otter : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
	{
		// Appelle l'operateur d'affectation de la classe de base Animal
		Animal::operator=(rhs);
	}
	return (*this);
}

void	Otter::call(void)
{
	std::cout << "Hiss !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Otter const &i)
{
	o << "Otter : ";
	// Appelle la surcharge d'operateur << d'Animal
	o << static_cast<const Animal&>(i);
	return (o);
}
