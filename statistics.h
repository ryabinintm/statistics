#pragma once

class IStatistics {
public:
	virtual void update(double next) = 0;
	virtual double eval() const = 0;
	virtual const char * name() const = 0;
	
	virtual ~IStatistics() = default;
};	


class Min : public IStatistics {
public:
	Min();
	void update(double next) override;
	double eval() const override;
	const char * name() const override;

private:
	double m_min;
};	


class Max : public IStatistics {
public:
	Max();
	void update(double next) override;
	double eval() const override;
	const char * name() const override;

private:
	double m_max;
};	
