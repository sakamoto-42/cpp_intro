/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:28:57 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 08:52:35 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"
#include <iostream>

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Sample 1 Constructor called" << std::endl;
	this->a1 = p1;
	std::cout << "Sample 1 this->a1 = " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "Sample 1 this->a2 = " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "Sample 1 this-> a3 = " << this->a3 << std::endl;
	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Sample 1 Destructor called" << std::endl;
	return ;
}
