/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:34:43 by ana-pper          #+#    #+#             */
/*   Updated: 2025/09/04 10:57:53 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array {
private:
    T*            data;
    unsigned int  _size;

public:
    Array() : data(NULL), _size(0) {}

    Array(unsigned int n) : data(NULL), _size(n) {
        if (_size > 0) data = new T[_size]();
    }

    Array(const Array& other) : data(NULL), _size(other._size) {
        if (_size > 0) {
            data = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                data[i] = other.data[i];
        }
    }

    ~Array() { delete[] data; }

    Array& operator=(const Array& other) {
        if (this != &other) {
            T* newData = NULL;
            if (other._size > 0) {
                newData = new T[other._size];
                for (unsigned int i = 0; i < other._size; ++i)
                    newData[i] = other.data[i];
            }
            delete[] data;
            data  = newData;
            _size = other._size;
        }
        return *this;
    }

    T& operator[](int idx) {
        if (idx < 0 || static_cast<unsigned int>(idx) >= _size)
            throw std::out_of_range("Array index out of bounds");
        return data[idx];
    }

    T const& operator[](int idx) const {
        if (idx < 0 || static_cast<unsigned int>(idx) >= _size)
            throw std::out_of_range("Array index out of bounds");
        return data[idx];
    }

    unsigned int size() const { return _size; }
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& array) {
    out << "Array = { ";
    for (unsigned int i = 0; i < array.size(); ++i) {
        out << array[i];
        if (i + 1 < array.size()) out << ", ";
    }
    out << " }";
    return out;
}

#endif