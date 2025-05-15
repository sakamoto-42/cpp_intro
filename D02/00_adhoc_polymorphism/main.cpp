/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:42:30 by julien            #+#    #+#             */
/*   Updated: 2025/05/15 13:47:37 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.Bar('a');
	instance.Bar(42);
	instance.Bar(3.14f);
	instance.Bar(instance);
	return (0);
}
