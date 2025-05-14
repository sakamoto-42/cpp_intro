/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:12:58 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 11:20:02 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Student
{
	private:
		std::string _login;
	
	public:
		Student(std::string login): _login(login)
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
	Student	bob = Student("bfubar");
	Student	*jim = new Student("jfubar");

	// Do some stuff here
	delete jim; // jim is destroyed
	return (0); // bob is destroyed
}
