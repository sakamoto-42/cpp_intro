/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:00:41 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:46:18 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.class.hpp"

Dog::Dog(void) : Quadruped("Unnamed Dog")
{
	std::cout << "Dog : Default constructor called" << std::endl;
	return ;
}

// Call the Quadruped Constructor with name
Dog::Dog(std::string const &name) : Quadruped(name)
{
	std::cout << "Dog : Parametric constructor called with ";
	std::cout << name << std::endl;
	return ;	
}

Dog::Dog(Dog const &src) : Quadruped(src)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	return ;
}

// /!\ Call automatically the Quadruped Destructor
Dog::~Dog(void)
{
	std::cout << "Dog : Destructor called" << std::endl;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog : Assignment operator called" << std::endl;
	if (this != &rhs)
		Quadruped::operator=(rhs);
	return (*this);
}
		
void	Dog::bark(void)
{
	std::cout << this->getName();
	std::cout << " says " << "Woof ! Woof !" << std::endl;
	return ;	
}

void	Dog::showLegsStatus(void)
{
	long unsigned int	i;
	std::cout << "This dog has :" << std::endl;
	i = 0;
	while (i < (sizeof(legs) / sizeof(legs[0])))
	{
		std::cout << i + 1;
		if (i < sizeof(legs) - 1)
			std::cout << "..." << std::endl;
		i++;
	}
	std::cout << " legs" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Dog const &i)
{
	o << "Dog : ";
	o << static_cast<const Quadruped&>(i);
	return (o);
}
