/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:24:06 by deryacar          #+#    #+#             */
/*   Updated: 2025/02/25 17:24:09 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

template<typename T>
void printArr(T& d){
    cout << d << endl;
}

template<typename T>
void squareOfN(T& n){
    n *= n;
}

template<typename T>
void iter(T* array, size_t n, void (*func)(T &)){
    for (size_t i = 0; i < n; ++i) {
        func(array[i]);
    }
}
