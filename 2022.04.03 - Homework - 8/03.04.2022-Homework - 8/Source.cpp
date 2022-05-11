#include <iostream>
#include "Complex.h"
#include <cmath>

using namespace std;

//void print_root(Complex* com_root);



int main()
{
	Complex c1(3, 1), c2(5, -2);
	cout << c1 * c2 << endl;
	cout << c1 / c2 << endl;
	cout << 3 * c1 + 4 * c2 << endl;
	cout << c1.abs() << endl; //модуль числа
	cout << c2.arg() << endl; //аргумент числа
	cout << c1.revers() << endl; //обратное число
	c1.sqr(5, cout);
	return EXIT_SUCCESS;
}





/*void print_root(Complex* com_root)
{
	for (int i = 0; i < 5; ++i)
	{
		com_root[i].print();
		cout << endl;
	}
}
*/