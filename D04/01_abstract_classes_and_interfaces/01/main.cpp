/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:27:06 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:41:08 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMoka3000.class.hpp"
#include "Tap.class.hpp"
#include "Espresso.class.hpp"

int	ft_check_coffee_prepared(ICoffee *myCoffee)
{
	if (myCoffee == NULL)
	{
		std::cout << "FAIL : My coffee has not been prepared..." << std::endl;
		return (0);
	}
	std::cout << "SUCCESS : My coffee is a real ";
	std::cout << myCoffee->getType() << " !" << std::endl;
	return (1);
}

int	main(void)
{
	ICoffeeMaker	*coffeMaker;
	IWaterSource	*waterSource;
	ICoffee			*myCoffee;

	coffeMaker = new SuperMoka3000();
	waterSource = new Tap();
	std::cout << std::endl;
	std::cout << "Niveau d'eau : " << coffeMaker->getWaterLevel();
	std::cout << " ml" << std::endl;
	std::cout << "--- Ordering an espresso ---" << std::endl;
	myCoffee = coffeMaker->makeCoffee("espresso");
	if (ft_check_coffee_prepared(myCoffee) == 1)
	{
		std::cout << "Drinking " << myCoffee->getType() << std::endl;
		delete (myCoffee);
	}
	std::cout << std::endl;
	coffeMaker->fillWaterTank(waterSource);
	std::cout << std::endl;
	std::cout << "Niveau d'eau : " << coffeMaker->getWaterLevel();
	std::cout << " ml" << std::endl;
	std::cout << "--- Ordering an espresso ---" << std::endl;
	myCoffee = coffeMaker->makeCoffee("espresso");
	if (ft_check_coffee_prepared(myCoffee) == 1)
	{
		std::cout << "Drinking " << myCoffee->getType() << std::endl;
		delete (myCoffee);
	}
	std::cout << std::endl;
	std::cout << "Niveau d'eau : " << coffeMaker->getWaterLevel();
	std::cout << " ml" << std::endl;
	std::cout << "--- Ordering an risretto ---" << std::endl;
	myCoffee = coffeMaker->makeCoffee("risretto");
	if (ft_check_coffee_prepared(myCoffee) == 1)
	{
		std::cout << "Drinking " << myCoffee->getType() << std::endl;
		delete (myCoffee);
	}
	std::cout << std::endl;
	delete (coffeMaker);
	delete (waterSource);
	return (0);
}
