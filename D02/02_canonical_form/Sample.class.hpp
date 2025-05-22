/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 08:54:33 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:09:46 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class   Sample  {
    public:
		// Canonical (constructeur par defaut)
        Sample(void);
		Sample(int const n);
		// Canonical (constructeur par copie)
		Sample(Sample const &src);
		// Canonical (destructeur)
		virtual	~Sample(void);

		// Canonical (operateur d'assignation)
		Sample &operator=(Sample const &rhs);

		int		getFoo(void) const;

	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &o, Sample const &i);

#endif
