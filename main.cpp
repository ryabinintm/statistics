#include "statistic_min.h"

#include <iostream>

int main() {
	Min minimum_value;
	double value;

	while (std::cin >> value) {
		minimum_value.update(value);
	}

	std::cout << minimum_value.eval() << std::endl;
}
