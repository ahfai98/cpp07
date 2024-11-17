/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:31:02 by jyap              #+#    #+#             */
/*   Updated: 2024/11/17 12:15:21 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdint.h>
# include <iostream>
# include <exception>

template<typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array& copy);
		Array &operator=(const Array &copy);
		T &operator[](unsigned int n) throw(std::exception);
		~Array(void);

		unsigned int size(void);
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		T *storage;
		unsigned int storage_size;
};

template<typename T>
Array<T>::Array(void) : storage(new T[0]()), storage_size(0)
{
	std::cout << "[Array] Default Constructor has been called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : storage(new T[n]()), storage_size(n)
{
	std::cout << "[Array] Parametrized Constructor has been called" << std::endl;
}

template<typename T>
Array<T>::Array(Array& copy): storage(new T[copy.size()]), storage_size(copy.size())
{
	*this = copy;
	std::cout << "[Array] Copy Constructor has been called" << std::endl;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &copy)
{
	if (this == &copy)
		return (*this);
	delete[] this->storage;
	this->storage = new T[copy.storage_size];
	this->storage_size = copy.storage_size;
	for (unsigned int i = 0; i < copy.storage_size; i++)
		this->storage[i] = copy.storage[i];
	std::cout << "[Array] Copy Assignment Operator has been called" << std::endl;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n) throw(std::exception)
{
	if (n >= this->storage_size)
		throw Array<T>::OutOfBoundsException();
	return (this->storage[n]);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->storage;
	std::cout << "[Array] Default Destructor has been called" << std::endl;
}

template<typename T>
unsigned int Array<T>::size(void)
{
	return this->storage_size;
}

template <typename T>
const char*	Array<T>::OutOfBoundsException::what(void) const throw()
{
	return "Array: Exception: index out of bounds";
}

#endif
