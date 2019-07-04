/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:35:21 by vbespalk          #+#    #+#             */
/*   Updated: 2019/07/03 17:35:23 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <limits>
#include <math.h>
#include <cctype>
#include "Convert.hpp"
// const double inf = std::numeric_limits<double>::infinity();

void	dispChar(Convert const &val) 
{
	std::cout << "char: ";
	try
	{
		char ch = static_cast<char>(val);

		if (isprint(ch))
			std::cout << "'" << ch << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (Convert::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}		
}

void	dispInt(Convert const &val)
{
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(val) << std::endl;
	}
	catch (Convert::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	dispFloat(Convert const &val) 
{
	std::cout << "float: ";
	try
	{
		float fl = static_cast<float>(val);

		if (static_cast<int>(fl) == fl)
			std::cout << fl << ".0f" << std::endl;
		else
			std::cout << fl << "f" << std::endl;
	}
	catch (Convert::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	dispDouble(Convert const &val)
{
	std::cout << "double: ";
	try
	{
		double fl = static_cast<double>(val);

		if (static_cast<int>(fl) == fl)
			std::cout << fl << ".0" << std::endl;
		else
			std::cout << fl << std::endl;
	}
	catch (Convert::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "usage ./convert arg" << std::endl;
		return 0;
	}

	Convert val(argv[1]);

	dispChar(val);
	dispInt(val);
	dispFloat(val);
	dispDouble(val);
}