/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 09:20:38 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 10:01:28 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric constructor called whith value " << n << std::endl;
	return ;
}

Sample::Sample(Sample const &src)
{
	std::cout << "Copy constructor called with value " << src.getFoo() << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called with value " << this->_foo << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

Sample	&Sample::operator=(Sample const &rhs)
{
	std::cout << "Assignment operator called with value " << rhs.getFoo() << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sample const &i)
{
	o << "The value of _foo is : " << i.getFoo();
	return (o);
}
