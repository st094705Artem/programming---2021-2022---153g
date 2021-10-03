#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	cin >> n;
	while (i <= n)
	{
		i++;
		if (n%i == 0)
		{
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}