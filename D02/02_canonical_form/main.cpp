/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 09:46:08 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 17:03:32 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3(instance1);

	std::cout << std::endl;
	std::cout << "Instance 1 : ";
	std::cout << instance1 << std::endl;
	std::cout << "Instance 2 : ";
	std::cout << instance2 << std::endl;
	std::cout << "Instance 3 : ";
	std::cout << instance3 << std::endl;
	std::cout << std::endl;
	std::cout << "instance 3 = instance 2" << std::endl;
	instance3 = instance2;
	std::cout << std::endl;
	std::cout << "Instance 1 : ";
	std::cout << instance1 << std::endl;
	std::cout << "Instance 2 : ";
	std::cout << instance2 << std::endl;
	std::cout << "Instance 3 : ";
	std::cout << instance3 << std::endl;
	std::cout << std::endl;
	return (0);
}
