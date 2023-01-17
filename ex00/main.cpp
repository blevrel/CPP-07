/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:31:04 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 09:58:17 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;
	double c = 10.0;
	double d = 0.0;

	::swap(a, b);
	::swap(c, d);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;


	std::string	e = "chaine1";
	std::string	f = "chaine2";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min( e, f ) << std::endl;
	std::cout << "max(e, f) = " << ::max( e, f ) << std::endl;

	return (0);
}
