/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:11:00 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:46:56 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

# include <string>

class	Pony
{
	public:
		Pony(void);
		Pony(Pony const &src);
		virtual	~Pony(void);

		Pony	&operator=(Pony const &rhs);

		void	run(int distance);
		void	doMagic(std::string const &target);
		int		getNumberOfLegs(void) const;
	private:
		int	_numberOfLegs;
};

#endif
