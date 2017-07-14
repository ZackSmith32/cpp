// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:57:40 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/13 15:38:25 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <class T = int> 
class Array {
	
	public:
		Array();
		Array(unsigned int n); 
		Array(Array const & src);
		Array(T & src);				
		~Array();
		Array &	operator=(Array const & rhs);
		T &		operator[](int n);
		int		size() const;
	private:
		int		_size;
		T		*_arr;
};

template <class T> 
Array<T>::Array(){
	T		*newnew = new T[0];
			
	_size = 0;
	_arr = newnew;
}

template <class T> 
Array<T>::Array(unsigned int n) { 					// empty
	T		*blank = new T[n];

	_size = n;
	_arr = blank;
};

template <class T> 
Array<T>::Array(Array const & src) {					// copy
	*this = src;
};

template <class T> 
Array<T>::~Array() {
	std::cout << "deleting array" << std::endl;
	delete [] _arr;
};

template <class T> 
Array<T> &	Array<T>::operator=(Array const & rhs) {		// assignment
	int		i = 0;

	if (this != &rhs) {
		_arr = new T[rhs._size];
		for ( ; i < rhs._size; i++) {
			_arr[i] = rhs._arr[i];
		}
		_size = rhs._size;
	}
	return *this;
};

template <class T> 
T &		Array<T>::operator[](int n) {
	if (n > _size - 1)
		throw std::exception();
	return (_arr[n]);
}

template <class T> 
int		Array<T>::size() const {
	return (_size);
}

#endif