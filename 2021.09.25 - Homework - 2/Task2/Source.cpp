#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	bool b = a % 400 == 0;
	if (a % 4 == 0 && a % 100 != 0 || b) 
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}