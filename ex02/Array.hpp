/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:24:30 by deryacar          #+#    #+#             */
/*   Updated: 2025/02/25 17:24:32 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

using std::cerr;
using std::endl;
using std::exception;

template <typename T>
class Array {
	private:
		T	*number;
		unsigned int	len;
	public:
		Array() : number(NULL), len(0) {}

		Array(unsigned int n) : len(n) {
			number = new T[len];
			for (unsigned int i = 0; i < len; ++i) {
				number[i] = T();
			}
		}

		Array(const Array<T>& other) : len() {
			number = new T[len];
			for (unsigned int i = 0; i < len; ++i) {
				number[i] = other.number[i];
			}
		}

		~Array() {
			delete[] number;
		}

		Array<T>& operator=(const Array<T>& other) {
			if (this != &other) {
				delete[] number;
				len = other.len;
				number = new T[len];
				for (unsigned int i = 0; i < len; ++i) {
					number[i] = other.number[i];
				}
			}
			return *this;
		}

		T& operator[](unsigned int index) {
			if (index >= len) {
				throw std::out_of_range("Index out of range");
			}
			return number[index];
		}

		unsigned int size() const {
			return len;
		}
};
