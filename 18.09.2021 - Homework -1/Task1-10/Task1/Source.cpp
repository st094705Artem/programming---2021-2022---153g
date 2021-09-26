#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	cin >> a;
	cout << "The next number for the number" << " " << a << " " << "is" << " " << a + 1 << "." << endl;
	cout << "The previous number for the number" << " " << a << " " << "is" << " " << a - 1 << "." << endl;
	return EXIT_SUCCESS;
}
