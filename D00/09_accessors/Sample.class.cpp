/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:11:17 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 21:29:26 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Sample::getFoo(void) const
{
	return (this->_foo);
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	return ;
}
