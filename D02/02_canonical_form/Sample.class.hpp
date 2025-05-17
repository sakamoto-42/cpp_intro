/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 08:54:33 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:04:33 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

# include <iostream>

class   Sample  {
    public:
        Sample(void);							// Canonical (constructeur par defaut)
		Sample(int const n);
		Sample(Sample const &src);				// Canonical (constructeur par copie)
		virtual	~Sample(void);					// Canonical (destructeur)

		Sample &operator=(Sample const &rhs);   // Canonical (operateur d'assignation)

		int		getFoo(void) const;

	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &o, Sample const &i);

#endif
