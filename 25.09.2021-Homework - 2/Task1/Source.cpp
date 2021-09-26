#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cin >> a;
	int k = a / 100;
	int l = (a - k * 100) / 10;
	int j = a - k * 100 - l * 10;
	if (a != 0) {
		if (a >= 100) {
			switch (k)
			{
			case 1:
				cout << "Сто ";
				break;
			case 2:
				cout << "Двести ";
				break;
			case 3:
				cout << "Триста ";
				break;
			case 4:
				cout << "Четыреста  ";
				break;
			case 5:
				cout << "Пятьсот ";
				break;
			case 6:
				cout << "Шестьсот ";
				break;
			case 7:
				cout << "Семьсот ";
				break;
			case 8:
				cout << "Восемьсот ";
				break;
			case 9:
				cout << "Девятьсот ";
				break;
			}
		}
		else {
			cout << "";
		}

		if (l != 1) {
			switch (l)
			{
			case 0:
				cout << "";
				break;
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "пятьдесят ";
				break;
			case 6:
				cout << "шестьдесят ";
				break;
			case 7:
				cout << "семьдесят ";
				break;
			case 8:
				cout << "восемьдесят ";
				break;
			case 9:
				cout << "девяносто ";
				break;
			}
			switch (j)
			{
			case 0:
				cout << " бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
		}
		else {
			switch (j)
			{
			case 1:
				cout << "одиннадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
		}
	}
	else {
		cout << "Ноль бананов";
	}
	return EXIT_SUCCESS;
}