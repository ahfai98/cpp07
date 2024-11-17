/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:31:02 by jyap              #+#    #+#             */
/*   Updated: 2024/11/17 10:31:58 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template <typename T>
void swap(T &parameter1, T &parameter2)
{
	T temp;

	temp = parameter1;
	parameter1 = parameter2;
	parameter2 = temp;
}

template <typename T>
T min(T parameter1, T parameter2)
{
	if (parameter1 == parameter2)
		return parameter2;
	return parameter1 > parameter2 ? parameter2 : parameter1;
}

template <typename T>
T max(T parameter1, T parameter2)
{
	if (parameter1 == parameter2)
		return parameter2;
	return parameter1 > parameter2 ? parameter1 : parameter2;
}

#endif
