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
	if (m >= 2 && n >= 2) {
		if (x == 1 && y == 1) {
			cout << x << " " << y + 1 << endl;
			cout << x + 1 << " " << y << endl;
		}
	    if (x == 1 && y == n) {
			cout << x << " " << n - 1 << endl;
			cout << x + 1 << " " << n << endl;
		}
		if (x == m && y == 1) {
			cout << m - 1 << " " << y << endl;
			cout << m << " " << y + 1 << endl;
		}
	    if (x == m && y == n) {
			cout << m << " " << n - 1 << endl;
			cout << m - 1 << " " << n << endl;
		}

		else if (x > 1 && x < m && y == n) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
		}

		else if (x > 1 && x < m && y == 1) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b2 << endl;
		}

		else if (y > 1 && y < n && x == 1) {
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
			cout << x << " " << b2 << endl;
		}

		else if (y > 1 && y < n && x == m) {
			cout << a1 << " " << y << endl;
			cout << x << " " << b2 << endl;
			cout << x << " " << b1 << endl;
		}


		else if (y > 1 && y < n && x > 1 && x < m) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
			cout << x << " " << b2 << endl;
		}
	}
	else if (m == 1 && n == 1) {
		cout << "";
	}
	else if (m == 1 && n > 1) {
		if (x == 1 && y == 1) {
			cout << 1 << " " << b2;
		}
		else if (x == 1 && y == n) {
			cout << 1 << " " << b1;
		}
		else if (x == 1 && y > 1 && y < n) {
			cout << 1 << " " << b1 << endl;
			cout << 1 << " " << b2 << endl;
		}
	}
	else if (n == 1 && m > 1) {
		if (y == 1 && x == 1) {
			cout << a2 << " " << 1;
		}
		else if (y == 1 && x == m) {
			cout << a1 << " " << 1;
		}
		else if (y == 1 && x > 1 && x < m) {
			cout << a1 << " " << 1 << endl;
			cout << a2 << " " << 1 << endl;
		}
	}
	return EXIT_SUCCESS;
}