#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int noda = 0;
	int nodb = 0;
	noda = a;
	nodb = b;
	while (noda != nodb)
	{
		if (noda > nodb)
		{
			noda = noda - nodb;
		}
		else
		{
			nodb = nodb - noda;
		}
	}
	cout << (a * b) / nodb;
	return EXIT_SUCCESS;
}