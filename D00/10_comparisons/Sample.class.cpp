/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:00:43 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:42:37 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" <<std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" <<std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
