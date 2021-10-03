#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int n = 0;
	int i = 1;
	int sum0 = 0;
	int sum1 = 0;
	int sum2 = 0;
	cin >> a >> n;
	while (i < a)
	{
		++i;
		if (n == 0)
		{
			++sum0;
		}
		else if (n > 0)
		{
			++sum1;
		}
		else
		{
			++sum2;
		}
		cin >> n;
		
	}
	if (n == 0) 
	{
		cout << sum0 + 1 << " " << sum1 << " " << sum2;
	}
	else if (n > 0) 
	{
		cout << sum0 << " " << sum1 + 1 << " " << sum2;
	}
	else
	{
		cout << sum0 << " " << sum1 << " " << sum2 + 1;
	}
	return EXIT_SUCCESS;
}