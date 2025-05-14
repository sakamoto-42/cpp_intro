/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:32:16 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:34:55 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Student1.class.hpp"

Student::Student(std::string login) : _login(login)
{
	std::cout << "Student " << this->_login << " is born" << std::endl;
}

Student::~Student(void)
{
	std::cout << "Student " << this->_login << " died" << std::endl;
}
