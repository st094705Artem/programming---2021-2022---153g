#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	if (a != 0 && c != 0 && b%a == 0 && b*c != a * d) {
		cout << -(b / a);
	}
	else if (a != 0 && c == 0 && b%a == 0) {
		cout << -(b / a);
	}
	else if (a == 0 && b == 0) {
		cout << "INF";
	}
	else {
		cout << "NO";
	}
	return EXIT_SUCCESS;
}