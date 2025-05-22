/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:11:34 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 15:18:12 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

# include <string>
# include "Animal.class.hpp"

class	Pony : public Animal
{
	public:
		Pony(void);
		Pony(Pony const &src);
		virtual	~Pony(void);

		Pony	&operator=(Pony const &rhs);

		void	doMagic(std::string const &target);
		// Implementation de la methode virtuelle pure d'Animal
		void    call(void);
};

std::ostream	&operator<<(std::ostream &o, Pony const &i);

#endif
