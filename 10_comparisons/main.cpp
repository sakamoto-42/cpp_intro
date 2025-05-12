/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:07:21 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 22:12:53 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance1(42);
	Sample	instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance1 and instance1 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not physically equal" << std::endl;
	if (&instance2 == &instance2)
		std::cout << "instance2 and instance2 are physically equal" << std::endl;
	else
		std::cout << "instance2 and instance2 are not physically equal" << std::endl;
	if (&instance1 == &instance2)
		std::cout << "instance1 and instance2 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not physically equal" << std::endl;
	if (instance1.compare(&instance1) == 0)
		std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not structurally equal" << std::endl;
	if (instance2.compare(&instance2) == 0)
		std::cout << "instance2 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance2 and instance2 are not structurally equal" << std::endl;
	if (instance1.compare(&instance2) == 0)
		std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not structurally equal" << std::endl;
	return (0);
}