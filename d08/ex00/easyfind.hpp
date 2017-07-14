#ifndef EASYFIND_H
# define EASYFIND_H

template <class T>
typename T::const_iterator		easyfind(T container, int n) {
	typename T::const_iterator	a = container.begin();
	typename T::const_iterator	end = container.end();
	
	while (a != end) {
		if (*a == n) {
			return (a);
		}
		a++;
	}
	throw std::exception();
}

# endif