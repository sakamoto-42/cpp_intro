/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:26:21 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 12:02:03 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACHARACTER_CLASS_HPP
# define ACHARACTER_CLASS_HPP

# include <string>

class	ACharacter
{
	public:
		ACharacter(void);
		ACharacter(ACharacter const &src);
		virtual ~ACharacter(void);

		ACharacter	&operator=(ACharacter const &rhs);

		void			sayHello(std::string const &target);
		virtual	void	attack(std::string const &target) = 0;

	private:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, ACharacter const &i);

#endif
