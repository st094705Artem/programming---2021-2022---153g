#include <iostream>
#include "Complex.h"
#include <cmath>

using namespace std;

//void print_root(Complex* com_root);



int main()
{
	Complex c1(10, 1), c2(3, 7), c3(8, 4);
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