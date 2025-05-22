/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:16:29 by julien            #+#    #+#             */
/*   Updated: 2025/05/22 11:02:36 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Quadruped	// Can access name, run() and legs
{
	public:
		void	run(void);	// Accessible from wherever

	protected:
		Leg		legs[4];	// Accessible from a Quadruped or derived object

	private:
		std::string	name; // Only accessible from a Quadruped object
};

class	Dog	: public Quadruped // Can access run() and legs()
{

};

int	main(void)	// Can only access run()
{

}
