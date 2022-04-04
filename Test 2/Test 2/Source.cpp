#include <iostream>
#include "Fraction.h"
#include <cmath>

using namespace std;

int main()
{
	Fraction fr1(3, 1);
	Fraction fr2(3, 1);

	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << 3 * fr1 << endl;
	cout << 4 * fr2 << endl;
	cout << (3 * fr1 + 4 * fr2) << endl;
	cout << 1 / (3 * fr2 + 4 * fr1) << endl;
	cout << fr1.abs() << endl;
	cout << fr1.revers() << endl;
	cout << fr1 - fr2 << endl;
	return EXIT_SUCCESS;
}