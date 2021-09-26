#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int N = 0;
	int M = 0;
	int K = 0;
	cin >> N >> M >> K;
	int t = K / M;
	int y = K / N;
	if (((K%M == 0 && K%t == 0) || (K%N == 0 && K%y == 0)) && K < M*N) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return EXIT_SUCCESS;
}