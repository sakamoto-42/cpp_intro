/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICoffeeMaker.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:42:21 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:35:18 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICOFFEEMAKER_CLASS_HPP
# define ICOFFEEMAKER_CLASS_HPP

#include "IWaterSource.class.hpp"
#include "ICoffee.class.hpp"

class	ICoffeeMaker
{
	public:
		// Destructeur public et virtuel
		virtual ~ICoffeeMaker(void);

		// Contrat de l'interface (fonctions virtuelles pures)
		virtual	void		fillWaterTank(IWaterSource *src) = 0;
		virtual	ICoffee		*makeCoffee(std::string const &type) = 0;
		virtual int 		getWaterLevel(void) const = 0;

	protected:
		// Constructeur protégé
		ICoffeeMaker(void);

	private:
		// On interdit la copie en la déclarant privée
		// et on ne l'implémente PAS dans le .cpp
		ICoffeeMaker(ICoffeeMaker const &src);
		ICoffeeMaker	&operator=(ICoffeeMaker const &rhs);
};

#endif
