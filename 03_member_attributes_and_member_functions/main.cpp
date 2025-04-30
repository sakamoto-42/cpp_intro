/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:47:26 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 08:08:38 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance;

	instance.Foo = 42;
	std::cout << "Instance.Foo: " << instance.Foo << std::endl;
	instance.Bar();
	return (0);
}
