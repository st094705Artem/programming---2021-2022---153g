#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x;
	cin >> x;
	int t = x * x;
	cout << t * (t + x + 1) + x + 1;
	return EXIT_SUCCESS;
}
