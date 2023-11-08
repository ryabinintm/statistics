#include "statistics.h"
#include <numeric>

void Mean::update(double next) {
	vnums.push_back(next);
}

double Mean::eval() const {
	double nums_sum = std::accumulate(vnums.begin(), vnums.end(), 0);
	return nums_sum / vnums.size();
}

const char * Mean::name() const {
	return "mean";
}
