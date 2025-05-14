/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student2.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:40:38 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:44:54 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT2_CLASS_HPP
# define STUDENT2_CLASS_HPP
# include <string>

class	Student
{
	private:
		std::string _login;
	
	public:
		Student(void);
		~Student(void);
};

#endif
