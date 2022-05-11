#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int i1 = 1;
	int a1 = 1;
	int i2 = 1;
	int a2 = 1;
	int i3 = 1;
	int a3 = 1;
	cin >> n >> k;
	int p = n - k;
	while (i1 <= n) 
	{
		a1 = a1 * i1;
		++i1;
	}

	while (i2 <= k) 
	{
		a2 = a2 * i2;
		++i2;
	}

	while (i3 <= p)
	{
		a3 = a3 * i3;
		++i3;
	}
	int c = a1 / (a2 * a3);
	cout << c;
	return EXIT_SUCCESS;
}