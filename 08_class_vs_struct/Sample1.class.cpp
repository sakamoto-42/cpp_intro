/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:51:28 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 20:57:12 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample1::Bar(void) const
{
	std::cout << "Member function Bar called" << std::endl;
	return ;
}
