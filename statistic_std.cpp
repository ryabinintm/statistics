#include <cmath>

class Std : public IStatistics {
public:
	Std() : m_std{0.0}, count{0} {
	}
	
	void update(double next) override {
		count++;
		next -= count;
		m_std += pow(next, 2) / count;
	}

	double eval() const override {
		return sqrt(m_std);
	}

	const char * name() const override {
		return "std";
	}

private:
	double m_std;
	int count;
};	
