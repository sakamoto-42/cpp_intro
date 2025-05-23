/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:31:00 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 10:53:08 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_CLASS_HPP
# define WARRIOR_CLASS_HPP

# include <string>
# include "Character.class.hpp"

class	Warrior : public Character
{
	public:
		Warrior(void);
		Warrior(Warrior const &src);
		virtual ~Warrior(void);

		Warrior	&operator=(Warrior const &rhs);

		void	sayHello(std::string const &target);
};

std::ostream	&operator<<(std::ostream &o, Warrior const &i);

#endif
