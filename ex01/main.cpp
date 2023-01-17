/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:23:40 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/04 11:03:23 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"

int	main(void)
{
	char	charArr[] = {'0', '1', '2', '3', '4'};
	int		intArr[] = {0, 1, 2, 5, 10};
	double	doubleArr[] = {0.0, 0.1, 0.2, 0.3 ,0.4};

	std::cout << "Iter called on a char array" << std::endl;
	iter(charArr, 5, display);
	std::cout << "Iter called on an int array" << std::endl;
	iter(intArr, 5, display);
	std::cout << "Iter called on a double array" << std::endl;
	iter(doubleArr, 5, display);
}
