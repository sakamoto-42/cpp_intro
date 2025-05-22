/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:04:44 by julien            #+#    #+#             */
/*   Updated: 2025/05/21 22:15:15 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual	~Animal(void);

		Animal	&operator=(Animal const &rhs);

		void	run(int distance);
		void	call(void);
		void	eat(std::string const &what);
		void	walk(int distance);

	private:
		int	_numberOfLegs;
};

class	Otter : public Animal
{
	public:
		Otter(void);
		Otter(Otter const &src);
		virtual	~Otter(void);

		Otter	&operator=(Otter const &rhs);
};

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual	~Cat(void);

		Cat	&operator=(Cat const &rhs);

		void	scornSomeone(std::string const &target);
};

class	Pony : public Animal
{
	public:
		Pony(void);
		Pony(Pony const &src);
		virtual	~Pony(void);

		Pony	&operator=(Pony const &rhs);

		void	doMagic(std::string const &target);
};
