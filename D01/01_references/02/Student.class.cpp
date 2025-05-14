/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:23:35 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 19:27:05 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Student.class.hpp"

Student::Student(std::string const &login) : _login(login)
{
}

std::string	&Student::getLoginRef(void)
{
	return (this->_login);
}

std::string	const &Student::getLoginRefConst(void) const
{
	return (this->_login);
}

std::string	*Student::getLoginPtr(void)
{
	return &(this->_login);
}

std::string	const *Student::getLoginPtrConst(void) const
{
	return &(this->_login);
}
