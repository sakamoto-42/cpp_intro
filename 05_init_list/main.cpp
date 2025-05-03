/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:31:09 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 08:57:11 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
#include <iostream>

int	main(void)
{
	Sample1	instance1('a', 42, 4.2f);
	Sample2	instance2('z', 13, 3.14f);

	(void)instance1;
	(void)instance2;
	return (0);
}
