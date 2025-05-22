/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:09:10 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:38:33 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <string>

class	Cat
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		void	run(int distance);
		void	scornSomeone(std::string const &target);
		int		getNumberOfLegs(void) const;
	private:
		int	_numberOfLegs;
};

#endif
