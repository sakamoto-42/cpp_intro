/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IWaterSource.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:52:48 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 16:01:01 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IWATERSOURCE_CLASS_HPP
# define IWATERSOURCE_CLASS_HPP

#include <string>

class	IWaterSource
{
	public:
		// Destructeur public et virtuel
		virtual	~IWaterSource(void);
		
		// Contrat de l'interface
		// (une source d'eau doit pouvoir fournir de l'eau)
		virtual	int	getWater(int amount) = 0;
		virtual	std::string getType(void) const = 0;

	protected:
		// Constructeur protégé
		IWaterSource(void);

	private:
		// On interdit la copie en la déclarant privée
		// et on ne l'implémente PAS dans le .cpp
		IWaterSource(IWaterSource const &src);
		IWaterSource	&operator=(IWaterSource const &rhs);
};

#endif
