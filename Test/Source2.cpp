#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int min_x = 0;
	int max_x = 0;
	int i = 2;
	cin >> min_x >> max_x;
	while (cin >> x)
	{
		++i;
		if (i % 2 == 0)
		{
			if (max_x < x)
			{
				max_x = x;
			}
		}
		else if (min_x > x)
		{
			min_x = x;
		}
	}
	cout << max_x + min_x;
	return EXIT_SUCCESS;
}