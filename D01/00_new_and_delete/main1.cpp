/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:35:17 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:35:48 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.class.hpp"

int	main(void)
{
	Student	bob = Student("bfubar");
	Student	*jim = new Student("jfubar");

	// Do some stuff here
	delete jim; // jim is destroyed
	return (0); // bob is destroyed
}
