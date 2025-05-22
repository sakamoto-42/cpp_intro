/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Quadruped.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:53:48 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:06:11 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUADRUPED_CLASS_HPP
# define QUADRUPED_CLASS_HPP

# include <string>
# include "Leg.class.hpp"

class	Quadruped	// Can access name, run() and legs
{
	public:
		Quadruped(void);
		Quadruped(std::string const &name);
		Quadruped(Quadruped const &src);
		virtual ~Quadruped(void);

		Quadruped	&operator=(Quadruped const &rhs);

		void		run(void);	// Accessible from wherever
		void		identify(void) const;
		std::string	getName(void) const;

	protected:
		Leg		legs[4];	// Accessible from a Quadruped or derived object

	private:
		std::string	_name; // Only accessible from a Quadruped object
};

std::ostream	&operator<<(std::ostream &o, Quadruped const &i);

#endif
