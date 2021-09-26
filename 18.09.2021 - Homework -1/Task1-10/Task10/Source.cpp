#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a,b;
	cin >> a>>b;
	int k = a / b;
	int l = b / a;
	int c = k + l;
	cout << (a*k + b * l) / c;
	return EXIT_SUCCESS;
}