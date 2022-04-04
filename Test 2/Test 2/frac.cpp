#include<iostream>
#include"Fraction.h"
#include <cmath>

Fraction::Fraction()
{
	numerator = 1;
	denominator = 1;
}

Fraction::Fraction(long long num, long long den)
{
	numerator = num;
	denominator = den;
}

Fraction::Fraction(const Fraction& frac) : numerator(frac.numerator), denominator(frac.denominator) {}

Fraction::~Fraction()
{
	this->numerator = 0;
	this->denominator = 1;
}

long long Fraction::getNum()
{
	return this->numerator;
}
void Fraction::setNum(long long num)
{
	this->numerator = num;
}
long long Fraction::getDen()
{
	return this->denominator;
}
void Fraction::setDen(long long den)
{
	this->denominator = den;
}
void Fraction::set(long long num, long long den)
{
	this->numerator = num;
	this->denominator = den;
}




Fraction& Fraction::operator=(const Fraction& frac)
{
	this->numerator = frac.numerator;
	this->denominator = frac.denominator;

	return (*this);
}





Fraction Fraction::operator+(const Fraction& frac)
{
	return Fraction(this->numerator * frac.denominator + this->denominator * frac.numerator, this->denominator * frac.denominator);
}

Fraction operator+(const long long k, const Fraction& frac)
{
	Fraction c = Fraction(k, 0);
	return(c + frac);
}

Fraction operator+(const Fraction& frac, const long long k)
{
	Fraction c = Fraction(k, 0);
	return(c + frac);
}


Fraction Fraction::operator-(const Fraction& frac)
{
	return Fraction(this->numerator * frac.denominator - this->denominator * frac.numerator, this->denominator * frac.denominator);
}

Fraction operator-(const long long k, const Fraction& frac)
{
	Fraction c = Fraction(k, 0);
	return(c - frac);
}

Fraction operator-(Fraction& frac, const long long k)
{
	Fraction c = Fraction(k, 0);
	return(frac - c);
}



Fraction Fraction::operator*(const Fraction& frac)
{
	return  Fraction(this->numerator * frac.numerator, this->denominator * frac.denominator);
}

Fraction operator*(const long long k, const Fraction& frac)
{
	return Fraction(k * frac.numerator, frac.denominator);
}

Fraction operator*(const Fraction& frac, const long long k)
{
	return Fraction(k * frac.numerator, frac.denominator);
}

Fraction Fraction::operator/(const Fraction& frac)
{
	return Fraction(this->numerator * frac.denominator, frac.numerator * this->denominator);
}

Fraction operator/(const long long k, const Fraction& frac)
{
	Fraction c = Fraction(k, 1);
	return (c / frac);
}

Fraction operator/(Fraction& frac, const long long k)
{
	Fraction c = Fraction(k, 1);
	return  (frac / c);
}


Fraction Fraction::abs()
{
	long long a = this->numerator;
	long long b = this->denominator;
	if ((a > 0) and (b > 0))
	{
		return Fraction(a, b);
	}
	if ((a < 0) and (b > 0))
	{
		return Fraction(-a, b);
	}
	if ((a > 0) and (b < 0))
	{
		return Fraction(a, -b);
	}
	if ((a < 0) and (b < 0))
	{
		return Fraction(-a, -b);
	}
}


Fraction Fraction::power(long long k)
{
	return Fraction(pow(this->numerator, k), pow(this->denominator, k));
}



Fraction Fraction::revers()
{
	return Fraction(this->denominator, this->numerator);
}


bool Fraction::operator==(const Fraction& fraction)
{
	return bool(this->numerator * fraction.denominator == this->denominator * fraction.numerator);
}

bool operator==(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c == fraction);
}

bool operator==(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction == c);
}

bool Fraction::operator>(const Fraction& fraction)
{
	return bool((this->numerator / this->denominator) > (fraction.numerator / fraction.denominator));
}

bool operator>(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c > fraction);
}

bool operator>(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction > c);
}

bool Fraction::operator<(const Fraction& fraction)
{
	return bool((this->numerator / this->denominator) < (fraction.numerator / fraction.denominator));
}

bool operator<(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c < fraction);
}

bool operator<(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction < c);
}

bool Fraction::operator<=(const Fraction& fraction)
{
	return bool((this->numerator / this->denominator) <= (fraction.numerator / fraction.denominator));
}

bool operator<=(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c <= fraction);
}

bool operator<=(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction <= c);
}

bool Fraction::operator>=(const Fraction& fraction)
{
	return bool((this->numerator / this->denominator) >= (fraction.numerator / fraction.denominator));
}

bool operator>=(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c >= fraction);
}

bool operator>=(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction >= c);
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fr)
{
	long long nodnum = abs(fr.numerator);
	long long nodden = abs(fr.denominator);
	while (nodnum != nodden)
	{
		if (nodnum > nodden)
		{
			nodnum = nodnum - nodden;
		}
		else
		{
			nodden = nodden - nodnum;
		}
	}
	long long c = nodden;
	long long a = fr.numerator / c;
	long long b = fr.denominator / c;

	if (b == 0)
	{
		stream << " ERROR 404 ";
	}

	else if (b == 1)
	{
		stream << a;
	}

	else if (b == -1)
	{
		stream << -a;
	}

	else if (a * b > 0)
	{
		if (a > 0)
		{
			stream << a << "/" << b;
		}
		else
		{
			stream << -a << "/" << -b;
		}
	}

	else if (a * b < 0)
	{
		if (a > 0 && b < 0)
		{
			stream << -a << "/" << -b;
		}
		else
		{
			stream << a << "/" << b;
		}
	}
	return stream;
}