#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double d = 0;
	cin >> d;
	long long value = *((long long *)&d);
	for (long long i = 0; i < sizeof(double) * 8; ++i)
	{
		long long k = 1;
		long long curbit = (sizeof(double) * 8 - 1 -i);
		long long bitMask = k << curbit;
		long long bit = bitMask & value;
		bit = bit >> curbit;
		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}