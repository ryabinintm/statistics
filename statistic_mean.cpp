class Mean : public IStatistics {
public:
	Mean() : m_mean{0.0}, count{0} {
	}
	
	void update(double next) override {
		m_mean += next;
		count++;
	}

	double eval() const override {
		return m_mean / count;
	}

	const char * name() const override {
		return "mean";
	}

private:
	double m_mean;
	int count;
};	
