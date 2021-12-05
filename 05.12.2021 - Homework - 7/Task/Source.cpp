#include "myLib.h"

using namespace std;

int main(int argc, char* argv[])
{
    int c = 0;
    int n = 0;
    int R = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Необходимо выбрать:" << endl;
    cout << "Задача 3*n + 1 - нажмите 1." << endl;
    cout << "Задача про окружность - нажмите 2" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "Введите значение:" << endl;
        cin >> n;
        cout << Collatz_hypothesis(n, 0);
    }
    if (c == 2)
    {
        cout << "Введите значение:" << endl;
        cin >> R;
        circle(R);
    }
    return EXIT_SUCCESS;
}