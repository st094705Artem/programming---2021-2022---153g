#pragma once
#include<iostream>
#include <cmath>

class Fraction
{
private:
	long long numerator;
	long long denominator;
public:
	Fraction();
	Fraction(long long num, long long den);

	Fraction(const Fraction& frac);

	~Fraction();


	long long getNum();
	void setNum(long long num);
	long long getDen();
	void setDen(long long den);
	void set(long long num, long long den);



	Fraction& operator=(const Fraction& frac);

	Fraction operator+(const Fraction& frac);

	friend Fraction operator+(const long long k, const Fraction& frac);

	friend Fraction operator+(const Fraction& frac, const long long k);

	Fraction operator-(const Fraction& frac);

	friend Fraction operator-(const long long k, const Fraction& frac);

	friend Fraction operator-(Fraction& frac, const long long k);

	Fraction operator*(const Fraction& frac);

	friend Fraction operator*(const long long k, const Fraction& frac);

	friend Fraction operator*(const Fraction& frac, const long long k);

	Fraction operator/(const Fraction& frac);

	friend Fraction operator/(const long long k, const Fraction& frac);

	friend Fraction operator/(Fraction& frac, const long long k);

	Fraction abs();

	Fraction power(long long k);

	bool operator==(const Fraction& fraction);
	friend bool operator==(const long long k, const Fraction& fraction);
	friend bool operator==(Fraction& fraction, const long long k);

	bool operator>(const Fraction& fraction);
	friend bool operator>(const long long k, const Fraction& fraction);
	friend bool operator>(Fraction& fraction, const long long k);

	bool operator<(const Fraction& fraction);
	friend bool operator<(const long long k, const Fraction& fraction);
	friend bool operator<(Fraction& fraction, const long long k);

	bool operator<=(const Fraction& fraction);
	friend bool operator<=(const long long k, const Fraction& fraction);
	friend bool operator<=(Fraction& fraction, const long long k);

	bool operator>=(const Fraction& fraction);
	friend bool operator>=(const long long k, const Fraction& fraction);
	friend bool operator>=(Fraction& fraction, const long long k);

	Fraction revers();

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fr);
};
