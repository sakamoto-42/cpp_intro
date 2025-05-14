/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:54:11 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 16:00:27 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student
{
	private:
		std::string _login;
	
	public:
		Student(void) : _login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student(void)
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int	main(void)
{
	Student	*students = new Student[42];

	// Do some stuff here
	delete [] students;
}
