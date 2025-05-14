/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:51:28 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 20:57:18 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample2::Bar(void) const
{
	std::cout << "Member function Bar called" << std::endl;
	return ;
}
