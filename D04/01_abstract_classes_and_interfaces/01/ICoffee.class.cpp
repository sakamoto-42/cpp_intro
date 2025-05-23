/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICoffee.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:37:31 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 14:37:50 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICoffee.class.hpp"

ICoffee::ICoffee(void)
{
	std::cout << "ICoffee : Default constructor called" << std::endl;
	return ;
}

ICoffee::~ICoffee(void)
{
	std::cout << "ICoffee : Destructor called" << std::endl;
	return ;
}
