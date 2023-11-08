#include "statistics.h"
#include <iostream>

int main() {
	Std minimum_value;
	double value;

	while (std::cin >> value) {
		minimum_value.update(value);
	}

	std::cout << minimum_value.name() << ' ' << minimum_value.eval() << std::endl;
}
