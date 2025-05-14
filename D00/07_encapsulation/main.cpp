/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:31:53 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 22:39:04 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "Instance publicFoo: " << instance.publicFoo << std::endl;
	//instance._privateFoo = 42;
	//std::cout << "Instance _privateFoo: " << instance._privateFoo << std::endl;
	instance.publicBar();
	//instance._privateBar();
	return (0);
}
