/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Otter.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:09:12 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 15:12:48 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTTER_CLASS_HPP
# define OTTER_CLASS_HPP

# include <string>
# include "Animal.class.hpp"

class	Otter : public Animal
{
	public:
		Otter(void);
		Otter(Otter const &src);
		virtual	~Otter(void);

		Otter	&operator=(Otter const &rhs);
		
		// Implementation de la methode virtuelle pure d'Animal
		void    call(void);
};

std::ostream	&operator<<(std::ostream &o, Otter const &i);

#endif
