/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:28:57 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 08:54:30 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.class.hpp"
#include <iostream>

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Sample 2 Constructor called" << std::endl;
	std::cout << "Sample 2 this->a1 = " << this->a1 << std::endl;
	std::cout << "Sample 2 this->a2 = " << this->a2 << std::endl;
	std::cout << "Sample 2 this-> a3 = " << this->a3 << std::endl;
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Sample 2 Destructor called" << std::endl;
	return ;
}
