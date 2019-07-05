/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:31:19 by vbespalk          #+#    #+#             */
/*   Updated: 2019/07/04 22:31:21 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Array.hpp"

int				main(void)
{
	Array<int>		arr1(23);
	Array<int>		arr2;

	std::cout << "Arr1 size: " << arr1.size() << std::endl;
	std::cout << "Arr2 size: " << arr2.size() << std::endl;

	for (unsigned int i = 0; i < arr1.size(); ++i) {
		arr1[i] = rand();
		std::cout << "arr1[" << i << "]: " << arr1[i] << std::endl;
	}

	arr2 = arr1;
	std::cout << "\nAssigning arr1 to arr2\n" << std::endl;
	std::cout << "Arr2 size: " << arr2.size() << std::endl;
	for (unsigned int i = 0; i < arr2.size(); ++i) {
		std::cout << "arr2[" << i << "]: " << arr1[i] << std::endl;
	}

	std::cout << "\nSet arr1[42]: " << std::endl;
	try {
		arr1[42] = 108;
		std::cout << "SUCCESS" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	Array<std::string>	strArr1(8);
	Array<std::string>	strArr2(4);
	std::string titles[] = {"Sirius", "Deneb", "Vega", "Polaris", "Arcturus", "Capella", "Kaus Australis", "Navi"};

	std::cout << "strArr1 size: " << strArr1.size() << std::endl;
	std::cout << "strArr2 size: " << strArr2.size() << std::endl;
	for (unsigned int i = 0; i < strArr1.size(); ++i) {
		strArr1[i] = titles[i % 8];
		std::cout << "strArr1[" << i << "]: " << strArr1[i] << std::endl;
	}

	std::cout << "\nAssigning strArr1 to strArr2\n" << std::endl;
	strArr2 = strArr1;
	for (unsigned int i = 0; i < strArr2.size(); ++i) {
		std::cout << "strArr2[" << i << "]: " << strArr2[i] << std::endl;
	}


	std::cout << "\nCoping strArr1 in strArr3\n" << std::endl;
	Array<std::string>	strArr3 = strArr1;
	for (unsigned int i = 0; i < strArr3.size(); ++i) {
		std::cout << "strArr3[" << i << "]: " << strArr3[i] << std::endl;
	}
	return (0);
}
