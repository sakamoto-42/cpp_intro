/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:12:44 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 22:20:24 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
	public:
		int		publicFoo;

		Sample(void);
		~Sample(void);

		void	publicBar(void) const;

	private:
		int		_privateFoo;

		void	_privateBar(void) const;
};

#endif