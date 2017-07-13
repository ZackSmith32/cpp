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

template <class T = int>  							// wondering if this will work for default
class Array {
	
	public:
		Array() {
			T		*newnew = new T[0];
			
			_size = 0;
			_arr = newnew;
		}

		Array(unsigned int n) { 					// empty
			T		*blank = new T[n];
			
			_size = n;
			_arr = blank;
		};

		Array(Array const & src) {					// copy
			*this = src;
		};

		Array(T & src);				
		
		~Array() {
			std::cout << "deleting array" << std::endl;
			delete [] _arr;
		};

		Array &	operator=(Array const & rhs) {		// assignment
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

		T &		operator[](int n) {
			if (n > _size - 1)
				throw std::exception();
			return (_arr[n]);
		}

		int		size() const {
			return (_size);
		}


	private:
		int		_size;
		T		*_arr;
};

#endif