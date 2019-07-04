#include <iostream>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate(void)
{
	int gen;

	gen = rand() % 3;
	if (gen == 0)
		return (new A);
	else if (gen == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *ptr)
{
	if (dynamic_cast<A *>(ptr))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(ptr))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(ptr))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &ref)
{
	try {
		(void)dynamic_cast<A &>(ref);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			(void)dynamic_cast<B &>(ref);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e) {
			try {
				(void)dynamic_cast<C &>(ref);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e) {}
		}
	}
}

int		main(void)
{
	Base	*base;

	std::srand(std::time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		base = generate();
		identify_from_pointer(base);
		identify_from_reference(*base);
		delete base;
	}
}