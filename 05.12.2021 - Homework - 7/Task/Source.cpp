#include "myLib.h"

using namespace std;

int main(int argc, char* argv[])
{
    int c = 0;
    int n = 0;
    int R = 0;
    setlocale(LC_ALL, "Russian");
    cout << "���������� �������:" << endl;
    cout << "������ 3*n + 1 - ������� 1." << endl;
    cout << "������ ��� ���������� - ������� 2" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "������� ��������:" << endl;
        cin >> n;
        cout << Collatz_hypothesis(n, 0);
    }
    if (c == 2)
    {
        cout << "������� ��������:" << endl;
        cin >> R;
        circle(R);
    }
    return EXIT_SUCCESS;
}