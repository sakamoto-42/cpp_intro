/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:17:05 by julien            #+#    #+#             */
/*   Updated: 2025/05/13 22:26:43 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	ft_print_nbInst(void)
{
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	return ;
}

void	f0(void)
{
	Sample	instance;

	ft_print_nbInst();
	return ;
}

void	f1(void)
{
	Sample	instance;

	ft_print_nbInst();
	f0();
	ft_print_nbInst();
	return ;
}

int	main(void)
{
	ft_print_nbInst();
	f1();
	ft_print_nbInst();
	return (0);
}