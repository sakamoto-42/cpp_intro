/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:28:57 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:51:38 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(char p1, int p2, float p3)
{
	std::cout << "Sample Constructor called" << std::endl;
	this->a1 = p1;
	std::cout << "Sample this->a1 = " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "Sample this->a2 = " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "Sample this-> a3 = " << this->a3 << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Sample Destructor called" << std::endl;
	return ;
}
