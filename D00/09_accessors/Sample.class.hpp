/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:07:41 by julien            #+#    #+#             */
/*   Updated: 2025/05/12 21:16:42 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		int		getFoo(void) const;
		void	setFoo(int v);

	private:
		int		_foo;
};

#endif
