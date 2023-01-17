/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:15:50 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 14:49:16 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << numbers.size() << std::endl;
    {
        Array<int> tmp;
		tmp = numbers;
        Array<int> test(tmp);

		std::cout << "Testing copy constructor and assigment operators, if the next two numbers are equal this is working : " << std::endl;
		std::cout << tmp[150] << std::endl;
		std::cout << test[150] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		std::cout << "Trying out of bounds index : ";
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "Trying out of bounds index : ";
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}
