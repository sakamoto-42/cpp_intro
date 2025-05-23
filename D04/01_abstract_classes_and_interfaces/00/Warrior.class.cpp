/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:48:56 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 14:46:06 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Warrior.class.hpp"

Warrior::Warrior(void)
{
	std::cout << "Warrior : Default constructor called" << std::endl;
	return ;
}

Warrior::Warrior(Warrior const &src) : ACharacter(src)
{
	std::cout << "Warrior : Copy constructor called" << std::endl;
	return ;
}

Warrior::~Warrior(void)
{
	std::cout << "Warrior : Destructor called" << std::endl;
	return ;
}

Warrior &Warrior::operator=(Warrior const &rhs)
{
	std::cout << "Warrior : Assignment operator called" << std::endl;
	if (this != &rhs)
		ACharacter::operator=(rhs);
	return (*this);
}

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Warrior const &i)
{
	o << "This is a Warrior object";
	o << static_cast<const ACharacter&>(i);
	return (o);
}
