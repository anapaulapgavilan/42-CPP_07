/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:34:51 by ana-pper          #+#    #+#             */
/*   Updated: 2025/09/04 10:48:53 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    Array<int>         intArray;
    Array<int>         copy(5);
    Array<std::string> strArray(5);

    for (int i = 0; i < 5; ++i)
        copy[i] = std::rand() % 100;

    std::cout << "intArray size: " << intArray.size() << std::endl;
    std::cout << "strArray size: " << strArray.size() << std::endl;
    std::cout << "copy size: " << copy.size() << std::endl;

    std::cout << "\nLet's assign copy to intArray..." << std::endl;
    intArray = copy;
    std::cout << "intArray: " << intArray << std::endl;
    std::cout << "copy: "     << copy     << std::endl;

    std::cout << "\nLet's write the strArray with strings..." << std::endl;
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";
    strArray[3] = "I'm";
    strArray[4] = "Ana Paula";
    std::cout << strArray << std::endl;

    std::cout << "\nDefault-initialized ints:" << std::endl;
    Array<int> zeros(3);
    std::cout << zeros << std::endl;

    std::cout << "\nLet's try getting elements out of intArray size" << std::endl;
    try {
        std::cout << intArray[61] << std::endl;
    } catch (std::exception& e) {
        std::cout << "61: " << e.what() << std::endl;
    }

    try {
        std::cout << intArray[-3] << std::endl;
    } catch (std::exception& e) {
        std::cout << "-3: " << e.what() << std::endl;
    }

    const Array<int> constArr(copy);
    std::cout << "\nconstArr[2] = " << constArr[2] << std::endl;

    return 0;
}