/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:09:50 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 14:49:31 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <string>
# include "Animal.class.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		void	scornSomeone(std::string const &target);
		// Implementation de la methode virtuelle pure d'Animal
		void    call(void);
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);

#endif
