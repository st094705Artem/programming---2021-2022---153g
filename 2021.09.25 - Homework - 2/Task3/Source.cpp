#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	if (n <= k) 
	{
		cout << 2 * m;
	}
    if ( n > k && 2*n%k == 0) 
	{
		cout << 2 * m*n / k;
	}
	if (n > k && 2*n%k != 0) 
	{
		cout << m * (1 + ((2 * n) / (k)));
	}
	return EXIT_SUCCESS;
}