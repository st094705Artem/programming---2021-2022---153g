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
	if (M >= 2 && N >= 2) {
		if (x == 1 && y == 1) {
			cout << x << " " << y + 1 << endl;
			cout << x + 1 << " " << y << endl;
		}
	    if (x == 1 && y == N) {
			cout << x << " " << N - 1 << endl;
			cout << x + 1 << " " << N << endl;
		}
		if (x == M && y == 1) {
			cout << M - 1 << " " << y << endl;
			cout << M << " " << y + 1 << endl;
		}
	    if (x == M && y == N) {
			cout << M << " " << N - 1 << endl;
			cout << M - 1 << " " << N << endl;
		}

		else if (x > 1 && x < M && y == N) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
		}

		else if (x > 1 && x < M && y == 1) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b2 << endl;
		}

		else if (y > 1 && y < N && x == 1) {
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
			cout << x << " " << b2 << endl;
		}

		else if (y > 1 && y < N && x == M) {
			cout << a1 << " " << y << endl;
			cout << x << " " << b2 << endl;
			cout << x << " " << b1 << endl;
		}


		else if (y > 1 && y < N && x > 1 && x < M) {
			cout << a1 << " " << y << endl;
			cout << a2 << " " << y << endl;
			cout << x << " " << b1 << endl;
			cout << x << " " << b2 << endl;
		}
	}
	else if (M == 1 && N == 1) {
		cout << "";
	}
	else if (M == 1 && N > 1) {
		if (x == 1 && y == 1) {
			cout << 1 << " " << b2;
		}
		else if (x == 1 && y == N) {
			cout << 1 << " " << b1;
		}
		else if (x == 1 && y > 1 && y < N) {
			cout << 1 << " " << b1 << endl;
			cout << 1 << " " << b2 << endl;
		}
	}
	else if (N == 1 && M > 1) {
		if (y == 1 && x == 1) {
			cout << a2 << " " << 1;
		}
		else if (y == 1 && x == M) {
			cout << a1 << " " << 1;
		}
		else if (y == 1 && x > 1 && x < M) {
			cout << a1 << " " << 1 << endl;
			cout << a2 << " " << 1 << endl;
		}
	}
	return EXIT_SUCCESS;
}