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
				cout << "��� ";
				break;
			case 2:
				cout << "������ ";
				break;
			case 3:
				cout << "������ ";
				break;
			case 4:
				cout << "���������  ";
				break;
			case 5:
				cout << "������� ";
				break;
			case 6:
				cout << "�������� ";
				break;
			case 7:
				cout << "������� ";
				break;
			case 8:
				cout << "��������� ";
				break;
			case 9:
				cout << "��������� ";
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
				cout << "�������� ";
				break;
			case 3:
				cout << "�������� ";
				break;
			case 4:
				cout << "����� ";
				break;
			case 5:
				cout << "��������� ";
				break;
			case 6:
				cout << "���������� ";
				break;
			case 7:
				cout << "��������� ";
				break;
			case 8:
				cout << "����������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			}
			switch (j)
			{
			case 0:
				cout << " �������";
				break;
			case 1:
				cout << "���� �����";
				break;
			case 2:
				cout << "��� ������";
				break;
			case 3:
				cout << "��� ������";
				break;
			case 4:
				cout << "������ ������";
				break;
			case 5:
				cout << "���� �������";
				break;
			case 6:
				cout << "����� �������";
				break;
			case 7:
				cout << "���� �������";
				break;
			case 8:
				cout << "������ �������";
				break;
			case 9:
				cout << "������ �������";
				break;
			}
		}
		else {
			switch (j)
			{
			case 1:
				cout << "����������� �������";
				break;
			case 2:
				cout << "���������� �������";
				break;
			case 3:
				cout << "���������� �������";
				break;
			case 4:
				cout << "������������ �������";
				break;
			case 5:
				cout << "���������� �������";
				break;
			case 6:
				cout << "����������� �������";
				break;
			case 7:
				cout << "���������� �������";
				break;
			case 8:
				cout << "������������ �������";
				break;
			case 9:
				cout << "������������ �������";
				break;
			}
		}
	}
	else {
		cout << "���� �������";
	}
	return EXIT_SUCCESS;
}