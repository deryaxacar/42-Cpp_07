/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:23:58 by deryacar          #+#    #+#             */
/*   Updated: 2025/02/25 17:23:59 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(const T &a, const T &b){
    return (a < b) ? a : b;
}

template<typename T>
T max (const T &a, const T &b){
    return (a > b) ? a : b;
}
