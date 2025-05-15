/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:05:54 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 20:08:56 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		void	Bar(char const c) const;
		void	Bar(int const n) const;
		void	Bar(float const z) const;
		void	Bar(Sample const &i) const;
};

#endif
