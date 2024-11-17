/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:31:02 by jyap              #+#    #+#             */
/*   Updated: 2024/11/17 10:43:30 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <stdint.h>
# include <iostream>

template <typename T>
void print_element(T &array_element)
{
	std::cout << array_element << std::endl;
}

template <typename T>
void plus_one(T &n)
{
	n += 1;
}

template <typename T>
void iter(T *address, size_t length, void(*funct)(T&))
{
	for (size_t i = 0; i < length; i++)
		funct(address[i]);
}

#endif
