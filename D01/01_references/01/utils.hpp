/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:12:45 by julien            #+#    #+#             */
/*   Updated: 2025/05/14 19:16:38 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <string>

void	byPtr(std::string *str);
void	byConstPtr(std::string const *str);
void	byRef(std::string &str);
void	byConstRef(std::string const &str);

#endif
