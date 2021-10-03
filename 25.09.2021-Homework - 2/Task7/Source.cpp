#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> n >> m >> k;
	int t = k / m;
	int y = k / n;
	if (((k%m == 0 && K%t == 0) || (k%n == 0 && k%y == 0)) && k < m*n) 
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}