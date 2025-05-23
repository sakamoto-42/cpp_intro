/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICoffeeMaker.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:45:37 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 12:01:07 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICoffeeMaker.class.hpp"

ICoffeeMaker::ICoffeeMaker(void)
{
	std::cout << "ICoffeeMaker : Default constructor called" << std::endl;
	return ;
}

ICoffeeMaker::~ICoffeeMaker(void)
{
	std::cout << "ICoffeeMaker : Destructor called" << std::endl;
	return ;
}
