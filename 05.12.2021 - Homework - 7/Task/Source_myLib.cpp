#include "myLib.h"

using namespace std;
void circle(int R)
{
    for (int i = 0; i <= 2 * R; i++)
    {
        for (int j = 0; j <= 2 * R; j++)
        {
            double t = (i - R) * (i - R) + (j - R) * (j - R);
            if (t < R * R + R * 0.5 && t > R * R - R * 0.5)
            {
                cout << " * ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

int Collatz_hypothesis(int n, int step)
{
    if (n == 1)
    {
        return (step);
    }
    else if (n % 2 == 0)
    {

        return (Collatz_hypothesis(n / 2, step + 1));
    }
    else
    {
        return (Collatz_hypothesis((3 * n) + 1, step + 1));
    }
}