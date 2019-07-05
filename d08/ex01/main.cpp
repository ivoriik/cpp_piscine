#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "span.hpp"

int				main(void)
{

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (not expected): " << e.what() << std::endl;
	}
	std::out << std::endl;

	Span spEmpty = Span(5);
	try {
		std::cout << spEmpty.shortestSpan() << std::endl;
		std::cout << spEmpty.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Span empty expected): " << e.what() << std::endl;
	}

	Span				span_one(1);
	Span				span(10000);
	std::vector<int>	source1();
	std::vector<int>	source2(800);

	std::cout << "Push 1 value in a span of 1 value: ";
	try {
		span_one.addNumber(15);
		std::cout << "Success (expected)" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (not expected): " << e.what() << std::endl;
	}

	std::cout << "Push 1 more value in the same Span: ";
	try {
		span_one.addNumber(23);
		std::cout << "Success (not expected)" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Out of range expected): " << e.what() << std::endl;
	}

	// span.addNumber(100);
	// span.addNumber(200);
	// span.addNumber(300);
	// span.addNumber(400);

	// std::cout << "With values from 100 to 400" << std::endl;
	// std::cout << "Min: " << span.shortestSpan() << std::endl;
	// std::cout << "Max: " << span.longestSpan() << std::endl;

	// for (int i = 42; i <= 4242; i++)
	// 	source1.push_back(i);
	// span.addNumber(source1.begin(), source1.end());

	// std::cout << "With values from 42 to 4242" << std::endl;
	// std::cout << "Min: " << span.shortestSpan() << std::endl;
	// std::cout << "Max: " << span.longestSpan() << std::endl;

	// std::cout << "Trying to push 46000 more values in a Span of 50000 values: ";
	// try {
	// 	span.addNumber(source2.begin(), source2.end());
	// 	std::cout << "Success, but that was not expected" << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "ERROR (Span full expected): " << e.what() << std::endl;
	// }

	return (0);
}