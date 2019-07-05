#include "Span.hpp"

Span(unsigned int n = 0)
	:	ints_(new int[n]), begin_(&ints_[0]), end_(begin_ + n), iterator_(begin_) {}

Span(int const &begin, int const &end):  {}

Span(Span const &oth)
	:	ints_(new int[oth.end_ - oth.begin_]), begin_(&ints_[0]), 
		end_(begin_ + oth.end_ - oth.begin_) {
			for (iterator_ = begin_; iterator_ <= oth.iterator_; ++iterator_) {
				*iterator_ = 
			}
		}

~Span() {
	delete [] ints_;
}

Span			&operator=(Span const &oth);
void			addNumber(int nb);
unsigned int	shortestSpan(void);
unsigned int	longestSpan(void);

#include <iostream>
#include "Span.hpp"

Span::Span(unsigned int size):
	_datas(size)
{
	_data_count = 0;
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span(void)
{}

Span				&Span::operator=(Span const &rhs)
{
	_datas = rhs._datas;
	return (*this);
}

void				Span::addNumber(int number) throw(SpanFullException)
{
	if (_data_count >= _datas.size())
		throw (SpanFullException());
	_datas[_data_count] = number;
	_data_count++;
}

void				Span::addNumber(
						std::vector<int>::iterator it,
						std::vector<int>::iterator end
					) throw(SpanFullException)
{
	if (_data_count + std::distance(it, end) >= static_cast<int>(_datas.size()))
		throw (SpanFullException());
	while (it != end)
	{
		_datas[_data_count] = *it;
		++_data_count;
		++it;
	}
}

int					Span::shortestSpan(void)
{
	std::vector<int>::iterator	it = _datas.begin();
	return (*std::min_element(it, it + _data_count));
}

int					Span::longestSpan(void)
{
	std::vector<int>::iterator	it = _datas.begin();
	return (*std::max_element(it, it + _data_count));
}

					Span::SpanFullException::SpanFullException(void) {}
					Span::SpanFullException::~SpanFullException(void) throw() {}
char const			*Span::SpanFullException::what(void) const throw()
{
	return ("Span full");
}