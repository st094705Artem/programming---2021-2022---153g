#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	cout << n + 2 - n % 2;
	return EXIT_SUCCESS;
}
