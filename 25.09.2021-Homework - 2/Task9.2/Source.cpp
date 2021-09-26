#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	cin >> M >> N >> x >> y;
	int a1 = x - 1;
	int a2 = x + 1;
	int b1 = y - 1;
	int b2 = y + 1;
	if (a1 >  0) {
		cout << a1 << " " << y << endl;
	}
	if (a2 <= M) {
		cout << a2 << " " << y << endl;
	}
	if (b1 > 0) {
		cout << x << " " <<  b1 << endl;
	}
	if (b2 <= N) {
		cout << x << " " << b2 << endl;
	}
	return EXIT_SUCCESS;
}