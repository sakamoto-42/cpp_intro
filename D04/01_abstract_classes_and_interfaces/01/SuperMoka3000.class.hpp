/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMoka3000.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:17:30 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:35:55 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMOKA3000_CLASS_HPP
# define SUPERMOKA3000_CLASS_HPP

# include "ICoffeeMaker.class.hpp"

// Classe concrète qui implémente le contrat de l'interface ICoffeMaker
class	SuperMoka3000 : public ICoffeeMaker
{
	public:
		SuperMoka3000(void);
		SuperMoka3000(SuperMoka3000 const &src);
		virtual ~SuperMoka3000(void);

		SuperMoka3000	&operator=(SuperMoka3000 const &rhs);

		// On déclare ici qu'on va implémenter les fonctions du contrat
		// la signature doit être EXACTEMENT la même que dans l'interface
		virtual	void		fillWaterTank(IWaterSource *src);
		virtual	ICoffee		*makeCoffee(std::string const &type);\
		virtual int			getWaterLevel() const;

	private:
		int	_waterLevel;
};

std::ostream	&operator<<(std::ostream &o, SuperMoka3000 const &i);

#endif
