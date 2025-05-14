/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:20:26 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 19:23:49 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP
# include <string>

class	Student
{
	private:
		std::string _login;

	public:
		Student(std::string const &login);
		std::string	&getLoginRef(void);
		std::string	const &getLoginRefConst(void) const;
		std::string	*getLoginPtr(void);
		std::string	const *getLoginPtrConst(void) const;
};

#endif
