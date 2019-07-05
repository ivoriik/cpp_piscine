/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:31:06 by vbespalk          #+#    #+#             */
/*   Updated: 2019/07/04 22:31:08 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<class T>
class	Array
{
private:
	T				*data_;
	unsigned int	size_;
public:
	Array<T>(void): data_(NULL), size_(0) {}
	Array<T>(unsigned int n): data_(new T[n]), size_(n) {}
	Array<T>(Array<T> const &oth): data_(new T[oth.size_]), size_(oth.size_) {
		for (unsigned int i = 0; i < size_; ++i) {
			data_[i] = oth.data_[i];
		}
	}
	~Array<T>(void) {
		delete [] data_;
	}

	Array<T> &operator=(Array<T> const &oth)
	{
		if (this != &oth) {
			this->~Array<T>();
			data_ = new T[oth.size_];
			size_ = oth.size_;
			for (unsigned int i = 0; i < size_; ++i) {
				data_[i] = oth.data_[i];
			}
		}
		return (*this);
	}

	T &operator[] (unsigned int i)
	{
		if (i >= size_)
			throw OutOfLimits();
		return (data_[i]);
	}

	T const &operator[] (unsigned int i) const
	{
		if (i >= size_)
			throw OutOfLimits();
		return (data_[i]);
	}

	unsigned int	size(void)	const {
		return (size_);
	}

	class   OutOfLimits : public std::exception {
	public:
		OutOfLimits(void) {}
		OutOfLimits(OutOfLimits const &) {}
		~OutOfLimits(void) throw() {}
		OutOfLimits& operator=(const OutOfLimits &) {}
		virtual const char* what() const throw() {
			return ("Index out of limits");
		};
	};
};

#endif