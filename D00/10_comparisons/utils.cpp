/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:42:45 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:54:03 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "utils.hpp"

void	ft_compare_instances_physically(Sample *a,
	Sample *b)
{
	if (a == b)
		std::cout << "physically equal" << std::endl;
	else
		std::cout << "not physically equal" << std::endl;
}

void	ft_compare_instances_structurally(Sample a,
	Sample *b)
{
	if (a.compare(b) == 0)
		std::cout << "structurally equal" << std::endl;
	else
		std::cout << "not structurally equal" << std::endl;
}