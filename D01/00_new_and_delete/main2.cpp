/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:39:04 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 18:39:37 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student2.class.hpp"

int	main(void)
{
	Student	*students;

	students = new Student[42];
	// Do some stuff here
	delete [] students;
	return (0);
}
