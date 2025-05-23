/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:33:41 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:02:03 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.class.hpp"

Character::Character(void)
{
	std::cout << "Character : Default constructor called" << std::endl;
	return ;
}

Character::Character(Character const &src)
{
	std::cout << "Character : Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Character::~Character(void)
{
	std::cout << "Character : Destructor called" << std::endl;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	std::cout << "Character : Assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	o << "This is a Character object at adress " << &i;
	return (o);
}
