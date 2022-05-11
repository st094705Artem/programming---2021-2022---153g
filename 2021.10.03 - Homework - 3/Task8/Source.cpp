#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int i = 1;
	int sum = 0;
	int a = 0;
	int n = 0;
	cin >> a >> n;
	while (i < a)
	{
		sum = sum + n;
		++i;
		cin >> n;
	}
	cout << sum + n;
	return EXIT_SUCCESS;
}