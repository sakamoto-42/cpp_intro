/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:58:32 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 08:05:36 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->Foo = 42;
	std::cout << "this->Foo: " << this->Foo << std::endl;
	this->Bar();

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::Bar(void)
{
	std::cout << "Member function called" << std::endl;
	return ;
}
