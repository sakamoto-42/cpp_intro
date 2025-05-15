/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:39:49 by julien            #+#    #+#             */
/*   Updated: 2025/05/15 13:32:27 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Student.class.hpp"

Student::Student(void) : _login("ldefault")
{
	std::cout << "Student " << this->_login << " is born" << std::endl;
	return ;
}

Student::~Student(void)
{
	std::cout << "Student " << this->_login << " died" << std::endl;
	return ;
}
