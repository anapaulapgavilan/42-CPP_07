/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:29:26 by ana-pper          #+#    #+#             */
/*   Updated: 2025/09/04 10:29:28 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>

void	display(T& elem)
{
	std::cout << "Variable's value is: " << elem << std::endl;
}

int	main()
{
	int	intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string strArray[3] = {"Hello", "World", "!"};

	std::cout << "Displaying int Array\n" << std::endl;
	iter<int>(intArray, 10, &display);

	std::cout << "Displaying string Array\n" << std::endl;
	iter<std::string>(strArray, 3, &display);

	return (0);
}