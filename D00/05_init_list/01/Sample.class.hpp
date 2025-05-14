/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:26:58 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:53:46 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
	public:
		char	a1;
		int		a2;
		float	a3;

		Sample(char p1, int p2, float p3);
		~Sample(void);
};

#endif
