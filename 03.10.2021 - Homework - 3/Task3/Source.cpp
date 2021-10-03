#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int i1 = 1;
	int i = 1;
	int s = 1;
	int l = 1;
	int n = 0;
	cin >> n;
	while (i <= n)
	{
		while (l <= s && i1 <= n) 
		{
			cout << i1 << " " ;
			l++;
			i1++;
		}
		s++;
		i++;
		l = 1;
		cout << endl;
	}
	return EXIT_SUCCESS;
}

