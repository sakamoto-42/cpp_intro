/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student2.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:39:49 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:43:51 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Student2.class.hpp"

Student::Student(void) : _login("ldefault")
{
	std::cout << "Student " << this->_login << " is born" << std::endl;
}

Student::~Student(void)
{
	std::cout << "Student " << this->_login << " died" << std::endl;
}
