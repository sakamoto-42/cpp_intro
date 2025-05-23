/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:26:21 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:23:54 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <string>

class	Character
{
	public:
		Character(void);
		Character(Character const &src);
		virtual ~Character(void);

		Character		&operator=(Character const &rhs);

		virtual void	sayHello(std::string const &target);
};

std::ostream			&operator<<(std::ostream &o, Character const &i);

#endif
