/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:26:35 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 09:56:24 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

template <typename myType>
void	swap(myType & a, myType & b)
{
	myType	c;

	c = a;
	a = b;
	b = c;
}

template <typename myType>
myType	min(myType a, myType b)
{
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename myType>
myType	max(myType a, myType b)
{
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	else
		return (b);
}
