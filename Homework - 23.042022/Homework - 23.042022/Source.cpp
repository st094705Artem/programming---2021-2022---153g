#include<iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList list(10);
	cout << list << endl;
	list.pushend(5);
	cout << list << endl;
	list.pushend(4);
	list.pushend(3);
	list.pushend(2);
	list.pushend(1);
	list.pushend(4);
	list.pushend(3);
	list.pushend(2);
	list.pushend(1);
	cout << list << endl;
	list.pushend(0);
	cout << list << endl;
	cout << list.extractend();
	cout << list << endl;

	list[1] = 1;
	cout << list << endl;
	list[5] = 10;
	cout << list << endl;
	list[16] = 20;
	cout << list << endl;
	list[-2] = 20;
	cout << list << endl;

	list.swap(1, 2);
	cout << list << endl;
	list.pushbegin(120);
	cout << list << endl;
	list.insert(56, 1);
	list.insert(57, 5);
	list.insert(-57, 5);
	cout << list << endl;
	list.extractbegin();
	cout << list << endl;
	list.extract(100);
	cout << list << endl;
	list.quick_sort();
	cout << list << endl;
	return 0;
}