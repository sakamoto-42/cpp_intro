/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:24:25 by julien            #+#    #+#             */
/*   Updated: 2025/04/30 07:41:42 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buffer[512];

	std::cout << "Hello world !" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buffer;
	std::cout << "You entered: [" << buffer << "]" << std::endl;
	return (0);
}
