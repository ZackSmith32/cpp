#include <iostream>
#include <string>

template <class T>
void	overThree(T n) {
	*n /= 3;
}

template <class T, class U, class V>
void	iter(T arr, U len, V func) {
	for (int i = 0; i < len; i++) {
		func(&arr[i]);
	}
}


int		main() {
	int		i = 0;
	double	test[7] = {4.44, 5.81, 1000.32, 432.6, 88.1, 0, 99.99};

	for ( ; i < 7; i++ ) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	iter(test, 7, overThree<double *>);
	for (i = 0; i < 7; i++ ) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}