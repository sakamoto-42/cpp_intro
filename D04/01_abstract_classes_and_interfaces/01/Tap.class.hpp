/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tap.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:58:03 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 15:56:42 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAP_CLASS_HPP
# define TAP_CLASS_HPP

# include <iostream>
# include "IWaterSource.class.hpp"

class Tap : public IWaterSource
{
	public:
		Tap(void);
		Tap(Tap const &src);
		virtual ~Tap(void);

		Tap	&operator=(Tap const &rhs);

		// Implémentation du contrat
		virtual	int	getWater(int amount);
		virtual	std::string	getType(void) const;
};

std::ostream	&operator<<(std::ostream &o, Tap const &i);

#endif
