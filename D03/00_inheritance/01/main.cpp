/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:18:27 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 15:45:20 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Pony.class.hpp"
#include "Otter.class.hpp"

int	main(void)
{
	Cat		Guppy;
	Pony	PinkiePie;
	Otter	Ollie;

	std::cout << std::endl;
	std::cout << "Guppy have ";
	std::cout << Guppy.getNumberOfLegs() << " legs";
	std::cout << std::endl;
	std::cout << "Guppy says ";
	Guppy.call();
	std::cout << "Guppy ";
	Guppy.walk(42);
	std::cout << "Guppy ";
	Guppy.eat("catnip");
	std::cout << "Guppy ";
	Guppy.scornSomeone("Pinkie Pie");
	std::cout << "Guppy ";
	Guppy.run(24);
	std::cout << std::endl;
	std::cout << "Pinkie Pie have ";
	std::cout << PinkiePie.getNumberOfLegs() << " legs";
	std::cout << std::endl;
	std::cout << "Pinkie Pie says ";
	PinkiePie.call();
	std::cout << "Pinkie Pie ";
	PinkiePie.walk(5);
	std::cout << "Pinkie Pie ";
	PinkiePie.eat("grass");
	std::cout << "PinkiePie ";
	PinkiePie.doMagic("Guppy");
	std::cout << "PinkiePie ";
	Guppy.run(15);
	std::cout << std::endl;
	std::cout << "Ollie have ";
	std::cout << Ollie.getNumberOfLegs() << " legs";
	std::cout << std::endl;
	std::cout << "Ollie says ";
	Ollie.call();
	std::cout << "Ollie ";
	Ollie.walk(99);
	std::cout << "Ollie ";
	Ollie.eat("grass");
	std::cout << "Ollie ";
	Guppy.run(1);
	std::cout << std::endl;
}
