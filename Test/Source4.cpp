#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int* a = new int [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int amax = a[0];
	int amin = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (amax < a[i])
		{
			amax = a[i];
		}
		if (amin > a[i])
		{
			amin = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == amax)
		{
			a[i] = amin;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	delete[] a;
	return EXIT_SUCCESS;
}