/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:07:46 by julien            #+#    #+#             */
/*   Updated: 2025/05/23 11:28:39 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(int const n);	// Pour initialiser _numberOfLegs
		Animal(Animal const &src);
		virtual	~Animal(void);

		Animal	&operator=(Animal const &rhs);

		void			run(int distance);
		virtual void	call(void) = 0;	// Methode virtuelle pure 
		void			eat(std::string const &what);
		void			walk(int distance);
		int				getNumberOfLegs(void) const;
	
	private:
		int	_numberOfLegs;
};

std::ostream	&operator<<(std::ostream &o, Animal const &i);

#endif
