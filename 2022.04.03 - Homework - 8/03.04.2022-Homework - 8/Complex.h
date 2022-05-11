#pragma once
#include<iostream>
#include <cmath>

struct Complex
{
private:
	double a;
	double b;
public:
	Complex(double a = 0, double b = 0);

	Complex(const Complex& complex);

	~Complex();


	double getA();
	void setA(double a);
	double getB();
	void setB(double b);
	void set(double a, double b);

	double abs();
	double arg();
	void print();
	void sqr(int n, std::ostream& stream);


	Complex revers();
	Complex& operator=(const Complex& complex);
	Complex operator-(const Complex& complex);
	friend Complex operator-(const double k, const Complex& complex);
	Complex operator+(const Complex& complex);
	friend Complex operator+(const double k, const Complex& complex);
	Complex operator*(const Complex& complex);
	friend Complex operator*(const double mult, const Complex& complex);
	friend Complex operator*(const Complex& complex, const double mult);
	Complex operator/(const Complex& complex);
	Complex operator^(double n);
	//Complex* root(double n);

	friend Complex operator/(const double k, const Complex& complex);
	friend Complex operator/(Complex& complex, const double k);

	friend  std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};