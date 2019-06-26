#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string &ref = brain;
	std::string *ptr = &brain;
	std::cout << ref << std::endl;
	std::cout << *ptr << std::endl;
	return (0);
}