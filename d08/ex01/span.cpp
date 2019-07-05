#include <iterator>
#include "span.hpp"

#include <iostream>


Span::Span(unsigned int size):
	ivec_(), size_(size), iter_(0) {
		ivec_.resize(size_);
	}

Span::Span(Span const &oth): 
	ivec_(oth.ivec_), size_(oth.size_), iter_(oth.iter_) {}

Span::~Span(void) {
	ivec_.clear();
}

Span		&Span::operator=(Span const &oth)
{
	if (this != &oth) {
		this->~Span();
		ivec_ = oth.ivec_;
		size_ = oth.size_;
		iter_ = oth.iter_;
	}
	return (*this);
}

void		Span::addNumber(int nb)
{
	if (iter_ >= ivec_.size())
		throw (OutOfRange());
	ivec_[iter_] = nb;
	++iter_;
}

void		Span::addNumber(std::vector<int>::iterator const &begin,
							std::vector<int>::iterator const &end)
{
	if (iter_ + static_cast<unsigned int>(std::distance(begin, end)) >= ivec_.size())
		throw (OutOfRange());
	std::vector<int>::iterator it = begin;
	while (it != end)
	{
		ivec_[iter_] = *it;
		++iter_;
		++it;
	}
}

unsigned int			Span::shortestSpan(void)
{
	if (iter_ <= 1)
		throw (NoSpan());
	std::vector<int> sorted(ivec_);
	std::sort(sorted.begin(), sorted.end());
	return (std::abs(sorted[1] - sorted[0]));
}

unsigned int			Span::longestSpan(void)
{
	if (iter_ <= 1)
		throw (NoSpan());
	std::vector<int> sorted(ivec_);
	std::sort(sorted.begin(), sorted.end());
	return (std::abs(sorted[sorted.size() - 1] - sorted[0]));
}

			Span::OutOfRange::OutOfRange(void) {}
			Span::OutOfRange::~OutOfRange(void) throw() {}
char const	*Span::OutOfRange::what(void) const throw()
{
	return ("Out of range");
}

			Span::NoSpan::NoSpan(void) {}
			Span::NoSpan::~NoSpan(void) throw() {}
char const	*Span::NoSpan::what(void) const throw()
{
	return ("No span to find");
}