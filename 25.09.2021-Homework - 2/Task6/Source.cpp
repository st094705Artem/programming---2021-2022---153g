#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int a2 = 0;
	int b2 = 0;
	cin >> a >> b >> a2 >> b2;
	if (abs(a - a2) == abs(b - b2)) 
	{
		cout << "YES";
	}
	else if (a == a2) 
	{
		cout << "YES";
	}
	else if (b == b2) 
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}