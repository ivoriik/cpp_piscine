#ifndef SPAN_CPP
#define SPAN_CPP

#include <exception>

class Span {
private:
	std::vector<int>	_ivec;
	unsigned int		_size;
	unsigned int		_iter;

public:
	Span(unsigned int n = 0);
	Span(Span const &oth);
	~Span();
	Span			&operator=(Span const &oth);
	void			addNumber(int nb) throw(Exception);
	void			addNumber(std::vector<int>::iterator const &begin, 
						std::vector<int>::iterator const &end) throw(Exception);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	class			Exception: public std::exception
	{
		public:
								Exception(void);
								~Exception(void) throw();
		char const				*what(void) const throw();
	};
}

#endif