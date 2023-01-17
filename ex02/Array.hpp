/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:10:08 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 14:42:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <cstdlib>

template <typename	T>
class Array
{

public:

	Array(void);
	Array(unsigned int n);
	Array(const Array & other);
	unsigned int	size(void) const;
	Array & operator=(const Array & other);
	T & operator[](unsigned int index);
	~Array(void);

private:

	T				*elements;
	unsigned int	_size;

};

template <typename T>
Array<T>::Array(void)
	:	elements(NULL),
		_size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
	:	elements(new T[n]),
		_size(n)
{
}

template <typename T>
Array<T>::Array(const Array<T> & other)
{
	this->elements = new T[other.size()];
	for (unsigned int i = 0; i < other.size(); i++)
		this->elements[i] = other.elements[i];
	this->_size = other.size();
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & other)
{
	this->elements = new T[other._size];
	for (unsigned int i = 0; i < other._size; i++)
		this->elements[i] = other.elements[i];
	this->_size = other._size;
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size || index < 0)
		throw std::exception();
	else
		return (this->elements[index]);
}

template <typename T>
Array<T>::~Array<T>(void)
{
	delete[] this->elements;
}
