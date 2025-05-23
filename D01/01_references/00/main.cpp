/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:06:26 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:59:10 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	numberOfBalls;
	int	*ballsPtr;
	int	&ballsRef = numberOfBalls;
	
	numberOfBalls = 42;
	ballsPtr = &numberOfBalls;
	std::cout << numberOfBalls << " ";
	std::cout << *ballsPtr << " ";
	std::cout << ballsRef << std::endl;
	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	return (0);
}
