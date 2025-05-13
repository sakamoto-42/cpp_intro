/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:02:07 by julien            #+#    #+#             */
/*   Updated: 2025/05/13 22:11:32 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		static int	getNbInst(void);
	
	private:
		static int	_nbInst;
};

#endif
