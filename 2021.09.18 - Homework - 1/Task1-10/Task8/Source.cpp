#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int k = 3600 * a + 60 * b + c;
	int l = 3600 * d + 60 * e + f;
	cout << l - k;
	return EXIT_SUCCESS;
}
