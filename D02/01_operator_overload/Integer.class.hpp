/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:51:40 by julien            #+#    #+#             */
/*   Updated: 2025/05/15 16:45:41 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

# include <iostream>

class Integer
{
	public:
		Integer(int const n);
		~Integer(void);

		int		getValue(void) const;
		Integer	&operator=(Integer const &rhs);
		Integer	operator+(Integer const &rhs) const;

	private:
		int		_n;
};

std::ostream	&operator<<(std::ostream &o, Integer const &rhs);

#endif
