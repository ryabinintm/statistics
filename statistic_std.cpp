#include "statistics.h"
#include <cmath>
#include <numeric>

void Std::update(double next) {
	vnums.push_back(next);
}

double Std::eval() const {
	size_t size = vnums.size();
	double avg = std::accumulate(vnums.begin(), vnums.end(), 0) / size;
	double result = 0.0;
	for (size_t i = 0; i < size; i++) {
		result += pow(vnums[i] - avg, 2);
	}
	
	return sqrt(result / size);
}

const char * Std::name() const {
	return "std";
}
