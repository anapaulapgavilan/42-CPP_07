/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:21:07 by ana-pper          #+#    #+#             */
/*   Updated: 2025/09/04 10:27:41 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#pragma once

#include <iostream>
#include <string>

template<typename T>
void		swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T&	min(T const& a, T const& b)
{
	return (a < b ? a : b);
}

template<typename T>
const T&	max(T const& a, T const& b)
{
	return (a > b ? a : b);
}

#endif