/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Espresso.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:38:35 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 14:42:09 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ESPRESSO_CLASS_HPP
# define ESPRESSO_CLASS_HPP

# include <iostream>
# include "ICoffee.class.hpp"

class Espresso : public ICoffee
{
	public:
		Espresso(void);
		Espresso(Espresso const &src);
		virtual ~Espresso(void);

		Espresso	&operator=(Espresso const &rhs);

		// Implémentation du contrat
		virtual	std::string	getType(void) const;
};

std::ostream	&operator<<(std::ostream &o, Espresso const &i);

#endif
