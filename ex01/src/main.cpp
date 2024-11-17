/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:47:42 by jyap              #+#    #+#             */
/*   Updated: 2024/11/17 10:48:05 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "../inc/iter.hpp"

int main(void)
{
    // Testing with int array
    int int_array[] = {1, 2, 3};
    const size_t int_len = sizeof(int_array) / sizeof(int_array[0]);

    std::cout << "Int array BEFORE plus_one(): ";
    ::iter(int_array, int_len, &::print_element<int>);
    std::cout << std::endl;

    ::iter(int_array, int_len, &::plus_one<int>);

    std::cout << "Int array AFTER plus_one(): ";
    ::iter(int_array, int_len, &::print_element<int>);
    std::cout << std::endl;

    // Testing with double array
    double double_array[] = {1.1, 2.2, 3.3};
    const size_t double_len = sizeof(double_array) / sizeof(double_array[0]);

    std::cout << "Double array BEFORE plus_one(): ";
    ::iter(double_array, double_len, &::print_element<double>);
    std::cout << std::endl;

    ::iter(double_array, double_len, &::plus_one<double>);

    std::cout << "Double array AFTER plus_one(): ";
    ::iter(double_array, double_len, &::print_element<double>);
    std::cout << std::endl;

    // Testing with float array
    float float_array[] = {1.5f, 2.5f, 3.5f};
    const size_t float_len = sizeof(float_array) / sizeof(float_array[0]);

    std::cout << "Float array BEFORE plus_one(): ";
    ::iter(float_array, float_len, &::print_element<float>);
    std::cout << std::endl;

    ::iter(float_array, float_len, &::plus_one<float>);

    std::cout << "Float array AFTER plus_one(): ";
    ::iter(float_array, float_len, &::print_element<float>);
    std::cout << std::endl;

    // Testing with char array
    char char_array[] = {'a', 'b', 'c'};
    const size_t char_len = sizeof(char_array) / sizeof(char_array[0]);

    std::cout << "Char array BEFORE plus_one(): ";
    ::iter(char_array, char_len, &::print_element<char>);
    std::cout << std::endl;

    ::iter(char_array, char_len, &::plus_one<char>);

    std::cout << "Char array AFTER plus_one(): ";
    ::iter(char_array, char_len, &::print_element<char>);
    std::cout << std::endl;
	
    return EXIT_SUCCESS;
}
