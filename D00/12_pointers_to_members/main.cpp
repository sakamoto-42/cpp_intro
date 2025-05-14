/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:08:05 by julien            #+#    #+#             */
/*   Updated: 2025/05/13 21:26:22 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;
	int		Sample::*p;
	Sample	*instancep;
	void	(Sample::*f)(void) const;

	p = NULL;
	p = &Sample::foo;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep = &instance;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	f = &Sample::Bar;
	(instance.*f)();
	(instancep->*f)();
	return (0);
}
