/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:33:41 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:33:55 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ACharacter.class.hpp"

ACharacter::ACharacter(void)
{
	std::cout << "ACharacter : Default constructor called" << std::endl;
	return ;
}

ACharacter::ACharacter(ACharacter const &src)
{
	std::cout << "ACharacter : Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ACharacter::~ACharacter(void)
{
	std::cout << "ACharacter : Destructor called" << std::endl;
	return ;
}

ACharacter	&ACharacter::operator=(ACharacter const &rhs)
{
	std::cout << "ACharacter : Assignment operator called" << std::endl;
	if (this != &rhs)
	{

	}
	return (*this);
}

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, ACharacter const &i)
{
	o << "This is a ACharacter object at adress " << &i;
	return (o);
}
