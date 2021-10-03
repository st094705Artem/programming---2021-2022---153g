#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int i = 0;
	cin >> a >> b >> c >> d;
	while (a + i <= b)
	{
		if ((a + i) % d == c)
		{
			cout << a + i << " ";
		}
		++i;
	}
	return EXIT_SUCCESS;
}