#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);

	cout << list << endl;
	list.insert(5, 2);
	cout << list << endl;
	cout << list.extract(2) << endl;
	cout << list << endl;
	list.swap(2,4);
	list.swap(1, 4);
	cout << list << endl;
	list.pushTail(52);
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	list.insert(5, 2);
	cout << list << endl;
	list.swap(10, 6);
	cout << list << endl;
	return EXIT_SUCCESS;
}