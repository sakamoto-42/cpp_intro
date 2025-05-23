/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:59:36 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 10:36:19 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Quadruped.class.hpp"
#include "Dog.class.hpp"

int	main(void)	// Can only access run()
{
	Dog	Cricket("Cricket");

	std::cout << std::endl;
	Cricket.identify();
	Cricket.run();
	Cricket.bark();
	Cricket.showLegsStatus();
	std::cout << std::endl;
}
