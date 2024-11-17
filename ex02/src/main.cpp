/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:47:42 by jyap              #+#    #+#             */
/*   Updated: 2024/11/17 12:20:21 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "../inc/Array.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Array<int>	a(3);
	Array<int>	b(3);

	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << "a[" << i << "] = " << a[i] << "\n";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << "b[" << i << "] = " << b[i] << "\n";
	}
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	std::cout << std::endl;
	std::cout << "AFTER FILLING A WITH 1's" << std::endl;
	for (size_t i = 0; i < a.size(); i++) {
		std::cout << "a[" << i << "] = " << a[i] << "\n";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << "b[" << i << "] = " << b[i] << "\n";
	}
	b = a;

	std::cout << "AFTER B = A" << std::endl;
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << "a[" << i << "] = " << a[i] << "\n";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << "b[" << i << "] = " << b[i] << "\n";
	}


    // Empty Array
    Array<int> empty;

	// OUT OF BOUNDS EXCEPTION
    try
	{
        std::cout << a[a.size() + 1] << std::endl;
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

	try
	{
        std::cout << empty[empty.size()] << std::endl;
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
	std::cout << empty.size() << std::endl;

	return EXIT_SUCCESS;
}