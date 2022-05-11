#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int i = 0;
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (b < 0)
	{
		cout << "";
	}
	else if (b == 0)
	{
		cout << 0;
	}
	else
	{
		while (i*i <= b)
		{
			if (i*i >= a && i*i <= b)
			{
				cout << i * i << " ";
			}
			++i;
		}
	}
	return EXIT_SUCCESS;
}