#include <iostream>
#include <clocale>

using namespace std;

void expand(int*& arr, int& capacity)
{
	int* newArr = new int[capacity * 2]{ 0 };
	for (int i = 0; i < capacity; ++i)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	capacity *= 2;
}
void start_shift(int*& arr, int capacity, int element, int count)
{
	int* newArr = new int[capacity] { 0 };
	for (int i = 0; i < count; ++i)
	{
		newArr[i + 1] = arr[i];
	}
	newArr[0] = element;
	delete[] arr;
	arr = newArr;
}
void shift_to_the_beginning(int*& arr, int capacity, int count)
{
	for (int i = 0; i < count; ++i)
	{
		arr[i] = arr[i + 1];
	}
}
void revers(int*& arr, int count)
{
	for (int i = 0; i < count / 2; ++i)
	{
		int t = 0;
		t = arr[i];
		arr[i] = arr[count - 1 - i];
		arr[count - 1 - i] = t;
	}
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int capacity = 1;
	int count = 0;
	bool exiting = false;
	int* arr = new int[capacity] { 0 };
	int element = 0;
	cout << "___ MENU ___" << endl;
	cout << "0. Выход из программы" << endl;
	cout << "1. Вывод текущего состояния массива." << endl;
	cout << "2. Добавить элемент в конец массива." << endl;
	cout << "3. Добавить элемент в начало массива." << endl;
	cout << "4. Удалить элемент из конца массива." << endl;
	cout << "5. Удалить элемент из начала массива." << endl;
	cout << "6. Развернуть массив." << endl;
	while (!exiting)
	{
		int n = 0;
		cin >> n;
		if (n == 1)
		{
			for (int i = 0; i < count; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		if (n == 2)
		{
			cout << "Вводите, пожалуйста:" << endl;
			cin >> element;
			if (count == capacity)
			{
				expand(arr, capacity);
			}
			arr[count] = element;
			++count;
		}
		if (n == 3)
		{
			cout << "Вводите, пожалуйста:" << endl;
			cin >> element;
			if (count == capacity)
			{
				expand(arr, capacity);
			}
			start_shift(arr, capacity, element, count);
			++count;
		}
		if (n == 4)
		{
			if (count == 0)
			{
				count = 0;
				continue;
			}
			else if (count == 1)
			{
				count = 0;
				arr[count] = 0;
			}
			else
			{
				arr[count] = 0;
				--count;
			}
		}
		if (n == 5)
		{
			if (count == 0)
			{
				count = 0;
				arr[count] = 0;
			}
			else if (count == 1)
			{
				count = 0;
				arr[count] = 0;
			}
			else
			{
				shift_to_the_beginning(arr, capacity, count);
				--count;
			}
		}
		if (n == 6)
		{
			revers(arr, count);
		}
		if (n == 0)
		{
			exiting = true;
		}
	}
	delete[] arr;
	return EXIT_SUCCESS;
}