/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:40:38 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 10:24:24 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP

# include <string>

class	Student
{
	public:
		Student(void);
		~Student(void);

	private:
		std::string _login;
};

#endif
