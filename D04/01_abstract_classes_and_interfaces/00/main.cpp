/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:08:00 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:41:02 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ACharacter.class.hpp"
#include "Warrior.class.hpp"

int	main(void)
{
	ACharacter	*a = new Warrior();

	// This would NOT be OK because ACharacter is abstract
	//ACharacter	*b = new ACharacter();

	std::cout << std::endl;
	a->sayHello("students");
	a->attack("roger");
	std::cout << std::endl;
	delete(a);
	return (0);
}
