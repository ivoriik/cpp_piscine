/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 21:47:46 by vbespalk          #+#    #+#             */
/*   Updated: 2019/07/04 21:48:46 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void	swap(T &v1, T &v2) {

	T tmp;
	tmp  = v1;
	v1 = v2;
	v2 = tmp;
}

template <class T>
T		min(T const &v1, T const &v2) {
	if (v1 < v2)
		return v1;
	else
		return v2;
}

template <class T>
T		max(T const &v1, T const &v2) {
	if (v1 > v2)
		return v1;
	else
		return v2;
}

int		main(void) {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	float const a1 = -45.0f;
	float const b1 = 233454657;
	std::cout << "min( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;
	std::cout << "max( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	char  ch = 's';
	char  ch2 = 'n';
	::swap( ch, ch2 );
	std::cout << "c = " << ch << ", d = " << ch2 << std::endl;
	std::cout << "min( c, d ) = " << ::min( ch, ch2 ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( ch, ch2 ) << std::endl;

 return 0;
}