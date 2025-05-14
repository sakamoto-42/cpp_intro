/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:25:11 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:31:49 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT1_CLASS_HPP
# define STUDENT1_CLASS_HPP
# include <string>

class	Student
{
	private:
		std::string _login;
	
	public:
		Student(std::string login);
		~Student(void);
};

#endif
