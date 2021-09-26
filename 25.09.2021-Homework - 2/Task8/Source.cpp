#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	int t = (a*a + b * b - c * c);
	int p = (c*c + b * b - a * a);
	int m = (a*a + c * c - b * b);
	if (a >= b + c || b >= a + c || c >= a + b) {
		cout << "impossible";
	}
	else if (a < b + c && b < a + c && c < a + b) {
		if (a*a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b) {
			cout << "right ";
		}
		else if (t > 0 && p > 0 && m > 0) {
			cout << "acute";
		}
		else {
			cout << "obtuse";
		}
	}
	return EXIT_SUCCESS;
}