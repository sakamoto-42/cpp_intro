/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:08:00 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:20:57 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.class.hpp"
#include "Warrior.class.hpp"
#include "Cat.class.hpp"

int	main(void)
{
	// This is OK, obviously, Warrior IS a Warrior
	Warrior		*a = new Warrior();

	// This is also OK because Warrior IS a Character
	Character	*b = new Warrior();

	// This would NOT be OK because Character IS NOT a Warrior
	// (Although they ARE related, and a Warrior IS a Character,
	// the reverse is untrue)
	//Warrior	*c = new Character();

	// This would NOT be ok either because Cat IS NOT a Character
	// (They are not even related)
	//Character	*d = new Cat();
	std::cout << std::endl;
	a->sayHello("students");
	b->sayHello("students");
	std::cout << std::endl;
	delete(a);
	delete(b);
	return (0);
}
