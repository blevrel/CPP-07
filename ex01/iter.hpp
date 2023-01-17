/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:24:21 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 10:59:46 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

template<typename myType, typename arrLen>
void	iter(myType *arrAddress, arrLen len, void (*f)(myType & param))
{
	arrLen	i;

	i = 0;
	while (i < len)
	{
		f(arrAddress[i]);
		i++;
	}
}

template<typename myType>
void	display(myType & param)
{
	std::cout << param << std::endl;
}
