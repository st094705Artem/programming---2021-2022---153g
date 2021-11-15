#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> k;
	int* arr = new int [k] { 0 };
	for (int i = 0; i < k; ++i)
	{
		int d = 0;
		cin >> n >>  m;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		arr[i] = d;
	}
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
	return EXIT_SUCCESS;
}