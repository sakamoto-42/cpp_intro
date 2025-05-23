/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:18:28 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 17:00:51 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Student.class.hpp"

int	main(void)
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " ";
	std::cout << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " ";
	std::cout << *(jim.getLoginPtrConst()) << std::endl;
	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	return (0);
}
