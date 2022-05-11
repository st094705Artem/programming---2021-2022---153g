#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a, b;
	cin >> a >> b;
	int k = ((a*b) % 109 + 109) % 109;
	cout << k;
	return EXIT_SUCCESS;
}
