#include "Complex.h"
#define M_PI 3.14159265358979323846

using namespace std;

Complex::Complex(double a, double b) : a(a), b(b) {}

Complex::Complex(const Complex& complex) : a(complex.a), b(complex.b) {}

Complex::~Complex()
{
	this->a = 0;
	this->b = 0;
}

double Complex::getA()
{
	return this->a;
}

void Complex::setA(double a)
{
	this->a = a;
}

double Complex::getB()
{
	return this->b;
}

void Complex::setB(double b)
{
	this->b = b;
}

void Complex::set(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Complex::abs()
{
	return sqrt(pow(this->a, 2) + pow(this->b, 2));
}
double Complex::arg()
{
	return atan(this->b / this->a);
}

void Complex::print()
{
	std::cout << "(" << this->a << "," << this->b << "i" << ")" << std::endl;
}

void Complex::sqr(int n, std::ostream& stream)
{
	Complex* com_root = new Complex[n]{ 0 };
	double r = sqrt(pow(this->a, 2) + pow(this->b, 2));
	double arg = acos(this->a / r);

	double k = n;
	k = 1 / k;
	for (int i = 0; i < n; ++i)
	{
		com_root[i] = Complex(pow(r, k) * cos((arg + 2 * M_PI * i) * k), pow(r, k) * sin((arg + 2 * M_PI * i) * k));
	}
	for (int i = 0; i < n; ++i)
	{
		stream << com_root[i] << endl;
	}
	delete[]  com_root;
}

Complex Complex::revers()
{
	return Complex(this->a, -this->b);
}


Complex& Complex::operator=(const Complex& complex)
{
	this->a = complex.a;
	this->b = complex.b;

	return *this;
}

Complex Complex::operator-(const Complex& complex)
{
	return Complex(this->a - complex.a, this->b - complex.b);
}

Complex operator-(const double k, const Complex& complex)
{
	return Complex(k - complex.a, -complex.b);
}

Complex Complex::operator+(const Complex& complex)
{
	return Complex(this->a + complex.a, this->b + complex.b);
}

Complex operator+(const double k, const Complex& complex)
{
	return Complex(complex.a + k, complex.b);
}

Complex Complex::operator*(const Complex& complex)
{
	return Complex(this->a * complex.a - this->b * complex.b, this->a * complex.b + this->b * complex.a);
}

Complex operator*(const double mult, const Complex& complex)
{
	return Complex(mult * complex.a, mult * complex.b);
}

Complex operator*(const Complex& complex, const double mult)
{
	return Complex(mult * complex.a, mult * complex.b);
}

Complex Complex::operator/(const Complex& complex)
{
	Complex c(complex.a / (complex.a * complex.a + complex.b * complex.b), -complex.b / (complex.a * complex.a + complex.b * complex.b));
	return Complex(this->a * c.a - this->b * c.b, this->a * c.b + this->b * c.a);
}

Complex Complex:: operator^(double n)
{
	double r = sqrt(pow(this->a, 2) + pow(this->b, 2));
	double arg = acos(this->a / r);
	return Complex(pow(r, n) * cos(arg * n), pow(r, n) * sin(arg * n));
}

/*Complex* Complex::root(double n)
{
	Complex *com_root = new Complex[n]{ 0 };
	double r = sqrt(pow(this->a, 2) + pow(this->b, 2));
	double arg = acos(this->a / r);
	for (int i = 0; i < n; ++i )
	{
		com_root[i] = Complex(pow(r, 1 / n) * cos((arg + 2 * M_PI * i) / n), pow(r, 1/n) * sin((arg + 2 * M_PI * i) / n));
	}
	return com_root;
}
*/

Complex operator/(const double k, const Complex& complex)
{
	Complex c = Complex(k, 0);
	return (c / complex);
}

Complex operator/(Complex& complex, const double k)
{
	Complex c = Complex(k, 0);
	return (complex / c);
}


std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
	if (complex.a == 0)
	{
		if (complex.b == 0)
		{
			stream << "0";
		}
		else if (complex.b == 1)
		{
			stream << "i";
		}
		else if (complex.b == -1)
		{
			stream << "-i";
		}
		else
		{
			stream << complex.b << "*i";
		}
	}
	else
	{
		if (complex.b == 0)
		{
			stream << complex.a;
		}
		else if (complex.b == 1)
		{
			stream << complex.a << "+i";
		}
		else if (complex.b == -1)
		{
			stream << complex.a << "-i";
		}
		else if (complex.b > 0)
		{
			stream << complex.a << " + " << complex.b << "*i";
		}
		else
		{
			stream << complex.a << complex.b << "*i";
		}
	}
	return stream;
}