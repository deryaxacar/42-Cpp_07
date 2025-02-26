/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:24:14 by deryacar          #+#    #+#             */
/*   Updated: 2025/02/25 17:24:16 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    ::iter<int, int>(iArr, 5, squareOfN);
    ::iter<int, int>(iArr, 5, printArr);

    string sArr[5] = {"foo", "bar", "baz", "foobar", "foobazz"};
    ::iter<string, string>(sArr, 5, printArr);
}
