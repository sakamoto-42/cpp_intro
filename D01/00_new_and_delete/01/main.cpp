/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:39:04 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 19:22:32 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.hpp"

int	main(void)
{
	Student	*students;

	students = new Student[42];
	// Do some stuff here
	delete [] students;
	return (0);
}
