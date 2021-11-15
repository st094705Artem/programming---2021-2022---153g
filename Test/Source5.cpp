#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int b = 0;
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int* an = new int [n] { 0 };
	int* am = new int [m] { 0 };
	int* amod = new int [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		cin >> an[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> am[i];
	}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (an[i] == am[j])
				{
					amod[i] = an[i];
				}
			}
		}
	for (int i = 0; i < n - 1; ++i)
	{
		for (int k = 0; k < n - i - 1; ++k)
		{
			if (amod[k] == amod[k + 1])
			{
				amod[k] = -1;
			}
			if (amod[k] > amod[k + 1])
			{
				b = amod[k];
				amod[k] = amod[k + 1];
				amod[k + 1] = b;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (amod[i] != 0 && amod[i] != -1)
		{
			cout << amod[i] << " ";
		}
	}
	delete[] an;
	delete[] am;
	delete[] amod;
	return EXIT_SUCCESS;
}