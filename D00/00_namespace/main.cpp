/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:52:59 by julien            #+#    #+#             */
/*   Updated: 2025/05/17 16:19:43 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;

int	f(void)
{
	return (2);
}

namespace Foo
{
	int	gl_var = 3;
	int	f(void)
	{
		return (4);
	}
}

namespace Bar
{
	int gl_var = 5;
	int f(void)
	{
		return (6);
	}
}

namespace Muf = Bar;

int	main(void)
{
	printf("gl_var:\t\t[%d]\n", gl_var);
	printf("f():\t\t[%d]\n\n", f());
	printf("Foo::gl_var:\t[%d]\n", Foo::gl_var);
	printf("Foo:f():\t[%d]\n\n", Foo::f());
	printf("Bar::gl_var:\t[%d]\n", Bar::gl_var);
	printf("Bar::f():\t[%d]\n\n", Bar::f());
	printf("Muf::gl_var:\t[%d]\n", Muf::gl_var);
	printf("Muf::f():\t[%d]\n\n", Muf::f());
	printf("::gl_var:\t[%d]\n", ::gl_var);
	printf("::f():\t\t[%d]\n", ::f());
	return (0);
}
