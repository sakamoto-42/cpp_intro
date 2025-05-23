/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:03:57 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:06:54 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"

Cat::Cat(void)
{
	std::cout << "Cat : Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called" << std::endl;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat : Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Cat const &i)
{
	o << "This is a Cat object at adress " << &i;
	return (o);
}
