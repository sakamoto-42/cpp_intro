/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:28:31 by julien            #+#    #+#             */
/*   Updated: 2025/05/15 13:47:32 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::Bar(char const c) const
{
	std::cout << "Member function Bar called with char overload : " << c << std::endl;
	return ;
}

void	Sample::Bar(int const n) const
{
	std::cout << "Member function Bar called with int overload : " << n << std::endl;
	return ;
}

void	Sample::Bar(float const z) const
{
	std::cout << "Member function Bar called with float overload : " << z << std::endl;
	return ;
}

void	Sample::Bar(Sample const &i) const
{
	(void) i;
	std::cout << "Member function Bar called with Sample class overload" << std::endl;
	return ;
}
