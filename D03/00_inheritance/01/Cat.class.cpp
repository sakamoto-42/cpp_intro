/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:14:15 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:02:20 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"

Cat::Cat(void) : Animal(4)	// Appelle le constructeur d'Animal
{
	std::cout << "Cat : Constructor called" << std::endl;
	return ;
}

// Appelle le constructeur de copie d'Animal
Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat : Copy constructor called with value ";
	std::cout << src.getNumberOfLegs() << std::endl;
	return ;
}

// /!\ Appel du destructeur d'Animal automatique
Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat : Assignment operator called with value ";
	std::cout << rhs.getNumberOfLegs() << std::endl;
	if (this != &rhs)
	{
		// Appelle l'operateur d'affectation de la classe de base Animal
		Animal::operator=(rhs);
	}
	return (*this);
}

void	Cat::scornSomeone(std::string const &target)
{
	std::cout << "scorn " << target << std::endl;
	return ;
}

void	Cat::call(void)
{
	std::cout << "Meow !" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Cat const &i)
{
	o << "Cat : ";
	// Appelle la surcharge d'operateur << d'Animal
	o << static_cast<const Animal&>(i);
	return (o);
}
