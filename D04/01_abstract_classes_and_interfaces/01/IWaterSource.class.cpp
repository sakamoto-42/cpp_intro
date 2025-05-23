/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IWaterSource.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:57:02 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 13:57:37 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IWaterSource.class.hpp"

IWaterSource::IWaterSource(void)
{
	std::cout << "IWaterSource : Default constructor called" << std::endl;
	return ;
}

IWaterSource::~IWaterSource(void)
{
	std::cout << "IWaterSource : Destructor called" << std::endl;
	return ;
}
