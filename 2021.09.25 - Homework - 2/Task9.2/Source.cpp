#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	cin >> m >> n >> x >> y;
	int a1 = x - 1;
	int a2 = x + 1;
	int b1 = y - 1;
	int b2 = y + 1;
	if (a1 >  0) {
		cout << a1 << " " << y << endl;
	}
	if (a2 <= m) {
		cout << a2 << " " << y << endl;
	}
	if (b1 > 0) {
		cout << x << " " <<  b1 << endl;
	}
	if (b2 <= n) {
		cout << x << " " << b2 << endl;
	}
	return EXIT_SUCCESS;
}