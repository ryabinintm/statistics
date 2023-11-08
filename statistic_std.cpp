#include "statistics.h"
#include <cmath>
#include <numeric>

Std::Std() : m_std{0.0}, count{0} {
}

void Std::update(double next) {
	in_nums.push_back(next);
}

double Std::eval() const {

	for (size_t i = 0; i < in_nums.size(); i++) {
		in_nums *= in_nums;
	}
	
}

const char * Std::name() const {
	return "std";
}
