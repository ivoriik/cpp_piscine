#ifndef SPAN_CPP
#define SPAN_CPP

#include <vector>
#include <exception>

class Span {
private:
	std::vector<int>	ivec_;
	unsigned int		size_;
	unsigned int		iter_;

public:
	Span(unsigned int n = 0);
	Span(Span const &oth);
	~Span();
	Span			&operator=(Span const &oth);
	void			addNumber(int nb);
	void			addNumber(std::vector<int>::iterator const &begin, 
						std::vector<int>::iterator const &end);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	class			OutOfRange: public std::exception {
	public:
					OutOfRange(void);
					~OutOfRange(void) throw();
		char const	*what(void) const throw();
	};
	class			NoSpan: public std::exception {
	public:
					NoSpan(void);
					~NoSpan(void) throw();
		char const	*what(void) const throw();
	};
};

#endif