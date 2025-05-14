/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:55:58 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 17:00:45 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();
	std::ofstream	ofs("test.out");
	ofs << "I like ponies a whole damn lot" << std::endl;
	ofs.close();
	return (0);
}
