/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:10:31 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 19:12:28 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "utils.hpp"

int		main(void)
{
	std::string	str;

	str = "I like butterflies";
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	return (0);
}
