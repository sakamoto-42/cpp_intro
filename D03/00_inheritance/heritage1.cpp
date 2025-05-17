/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 10:22:47 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 10:29:33 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Cat
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		void	run(int distance);
		void	scornSomeone(std::string const &target);

	private:
		int	_numberOfLegs;
};

