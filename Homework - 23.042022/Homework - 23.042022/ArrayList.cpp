#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int a = this->data[posi];
	this->data[posi] = this->data[posj];
	this->data[posj] = a;
}
int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	int* newdata = new int[this->capacity];
	newdata[0] = element;
	for (int i = 0; i < this->count; ++i)
	{
		newdata[i + 1] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->count++;
}

void ArrayList::insert(int element, int position)
{
	if (position < 0)
	{
		pushbegin(element);
	}
	else if (position > this->count - 1)
	{
		pushend(element);
	}
	else
	{
		pushbegin(element);
		for (int i = 0; i < position; ++i)
		{
			swap(i, i + 1);
		}
	}
}
int ArrayList::extractbegin()
{
	for (int i = 0; i < this->count - 1; ++i)
	{
		swap(i, i + 1);
	}
	this->count--;
	return this->data[0];
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extract(int position)
{
	if (position < 0)
	{
		extractbegin();
	}
	else if (position > this->count - 1)
	{
		extractend();
	}
	else
	{
		for (int i = position; i < this->count - 1; ++i)
		{
			swap(i, i + 1);
		}
		this->count--;
		return this->data[position];
	}
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

void ArrayList::quick_sort(int start, int end)
{
	if (end != start)
	{
		if (end < 0)
		{
			end = this->count;
		}
		int k = start;
		int l = (end + start) / 2;
		int p = this->data[(end + start) / 2];
		for (int i = start; i < end; ++i)
		{
			if (this->data[i] > p)
			{
				swap(i, l);
				l = i;
			}
			else
			{
				if (i == l)
				{
					swap(i, i);
				}
				else
				{
					if (k == l)
					{
						swap(k, i);
						++k;
						l = i;
					}
					else
					{
						swap(k, i);
						++k;
					}
				}
			}
		}
		swap(k, l);
		quick_sort(start, k);
		quick_sort(k + 1, end);
	}
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}

