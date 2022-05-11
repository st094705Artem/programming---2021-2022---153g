#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 1;
	int a = 1;
	cin >> n;
	while (i <= n)
	{
		a = 2 * a;
		++i;
	}
	cout << a;
	return EXIT_SUCCESS;
}
