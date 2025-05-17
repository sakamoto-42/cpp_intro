/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:07:21 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:56:32 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include "utils.hpp"

int	main(void)
{
	Sample	instance1(42);
	Sample	instance2(42);

	std::cout << "instance1 and instance1 are ";
	ft_compare_instances_physically(&instance1, &instance1);
	std::cout << "instance2 and instance2 are ";
	ft_compare_instances_physically(&instance2, &instance2);
	std::cout << "instance1 and instance2 are ";
	ft_compare_instances_physically(&instance1, &instance2);
	std::cout << "instance1 and instance1 are ";
	ft_compare_instances_structurally(instance1, &instance1);
	std::cout << "instance2 and instance2 are ";
	ft_compare_instances_structurally(instance2, &instance2);
	std::cout << "instance1 and instance2 are ";
	ft_compare_instances_structurally(instance1, &instance2);
	return (0);
}
