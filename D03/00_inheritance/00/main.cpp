/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:39:17 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:53:24 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"
#include "Pony.class.hpp"

int	main(void)
{
	Cat		Guppy;
	Pony	PinkiePie;

	std::cout << "Guppy have ";
	std::cout << Guppy.getNumberOfLegs() << " legs" << std::endl;
	std::cout << "Guppy ";
	Guppy.scornSomeone("Pinkie Pie");
	std::cout << "Guppy ";
	Guppy.run(10);

	std::cout << "Pinkie Pie have ";
	std::cout << PinkiePie.getNumberOfLegs() << " legs" << std::endl;
	std::cout << "PinkiePie ";
	PinkiePie.doMagic("Guppy");
	std::cout << "PinkiePie ";
	Guppy.run(25);
}
