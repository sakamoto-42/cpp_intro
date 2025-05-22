/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:57:50 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 19:17:58 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Quadruped.class.hpp"

class	Dog	: public Quadruped // Can access run() and legs()
{
	public:
		Dog(void);
		Dog(std::string const &name);
		Dog(Dog const &src);
		virtual	~Dog(void);

		Dog &operator=(Dog const &rhs);
		
		void	bark(void);
		void	showLegsStatus(void);
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);

#endif
