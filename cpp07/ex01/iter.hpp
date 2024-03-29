/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:22:16 by bperron           #+#    #+#             */
/*   Updated: 2022/11/22 07:59:52 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T> void iter(T *arr, int len, void(*f)(T &value)){
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T> void iter(const T *arr, int len, void(*f)(const T &value)){
	for (int i = 0; i < len; i++)
		f(arr[i]);
}