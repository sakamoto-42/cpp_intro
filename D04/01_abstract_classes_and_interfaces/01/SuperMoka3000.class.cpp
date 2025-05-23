/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMoka3000.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:39:19 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:28:07 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMoka3000.class.hpp"
#include "Espresso.class.hpp"

SuperMoka3000::SuperMoka3000(void) : _waterLevel(0)
{
	std::cout << "SuperMoka3000 ready for action !" << std::endl;
	return ;
}

SuperMoka3000::SuperMoka3000(SuperMoka3000 const &src): ICoffeeMaker()
{
	std::cout << "SuperMoka3000 : Copy constructor called" << std::endl;
	this->_waterLevel = src._waterLevel;
	return ;
}

SuperMoka3000::~SuperMoka3000(void)
{
	std::cout << "SuperMoka3000 powering down" << std::endl;
	return ;
}

SuperMoka3000 &SuperMoka3000::operator=(SuperMoka3000 const &rhs)
{
	std::cout << "SuperMoka3000 : Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_waterLevel = rhs._waterLevel;
	return (*this);
}

void		SuperMoka3000::fillWaterTank(IWaterSource *src)
{
	int	waterNeeded;
	int	waterObtained;

	if (src == NULL)
	{
		std::cout << "SuperMoka3000 : Error : No water source provided !";
		std::cout << std::endl;
		return ;
	}
	waterNeeded = 500 - this->_waterLevel;
	if (waterNeeded <= 0)
	{
		std::cout << "SuperMoka3000 : Water tank is already full !";
		std::cout << std::endl;
		return ;
	}
	std::cout << "SuperMoka3000 : Attempting to get ";
	std::cout << waterNeeded << "ml of water" << std::endl;
	waterObtained = src->getWater(waterNeeded);
	this->_waterLevel += waterObtained;
	std::cout << "SuperMoka3000 : Water tank now contains ";
	std::cout << this->_waterLevel << "ml" << std::endl;
	return ;
}

ICoffee*	SuperMoka3000::makeCoffee(std::string const &type)
{
	int	waterNeeded;

	std::cout << "SuperMoka3000 : Order received for a " << type << std::endl;
	if (type == "espresso")
	{
		waterNeeded = 30;
		if (this->_waterLevel < waterNeeded)
		{
			std::cout << "SuperMoka3000 : Error : not enough water to make an ";
			std::cout << "espresso !" << std::endl;
			return (NULL);
		}
		std::cout << "SuperMoka3000 : Using " << waterNeeded << " ml of water";
		std::cout << std::endl;
		this->_waterLevel -= waterNeeded;
		return (new Espresso());
	}
	else
	{
		std::cout << "SuperMoka3000 : Error : Unknown coffee type " << type;
		std::cout << std::endl;
		return (NULL);
	}
}

int			SuperMoka3000::getWaterLevel() const
{
	return (this->_waterLevel);
}

std::ostream	&operator<<(std::ostream &o, SuperMoka3000 const &i)
{
	o << "SuperMoka3000 : Water level at "
	<< i.getWaterLevel() << " ml";
	return (o);
}
