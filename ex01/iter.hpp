/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:29:17 by ana-pper          #+#    #+#             */
/*   Updated: 2025/09/04 10:35:33 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#pragma once

#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif