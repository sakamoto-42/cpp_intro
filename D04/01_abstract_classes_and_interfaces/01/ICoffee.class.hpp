/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICoffee.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:33:27 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 14:37:03 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICOFFEE_CLASS_HPP
# define ICOFFEE_CLASS_HPP

# include <string>

class	ICoffee
{
	public:
		// Destructeur public et virtuel
		virtual ~ICoffee(void);

		// Contrat de l'interface
		// (tout café doit avoir un type que l'on peut connaître)
		virtual	std::string	getType(void) const = 0;

	protected:
		// Constructeur protégé
		ICoffee(void);

	private:
		// On interdit la copie en la déclarant privée
		// et on ne l'implémente PAS dans le .cpp
		ICoffee(ICoffee const &src);
		ICoffee	&operator=(ICoffee const &rhs);
};

#endif
