/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:30:04 by vbespalk          #+#    #+#             */
/*   Updated: 2019/07/04 22:30:07 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
void	iter(T *array, size_t size, void func(T &)) {
	for (size_t i = 0; i < size; ++i) {
		func(array[i]);
	}
}

void 	printLen(std::string &s) {
	std::cout << s << " len: " << s.size() << std::endl;
}

template <class T>
void	printVal(T &x) {
	std::cout << x << std::endl;
}

int		main() {
	std::string titles[] = {"Sirius", "Deneb", "Vega", "Polaris", "Arcturus"};
	iter(titles, 5, ::printLen);

	std::cout << "\nint array\n";
	int intArr[] = {4, 8, 15, 16, 23, 42};
	iter(intArr, sizeof(intArr) / sizeof(int), printVal);

	std::cout << "\ndouble array\n";
	double dArr[] = {0.56, 5.6, 37.2, 5,6, 1e-6, 422.2};
	iter(dArr, sizeof(dArr) / sizeof(double), printVal);

	std::cout << "\nstring array\n";
	iter(titles, 5, printVal);
}
