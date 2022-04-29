#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}



Node*& LinkedList::nodeByIndex(int index)
{
	Node* temp = new Node();
	temp = head;
	for (int i = 1; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	return temp;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	if (index <= 0)
	{
		return pushHead(element);
	}
	else if (index > count)
	{
		return pushTail(element);
	}
	else
	{
		if (index == 1)
		{
			return pushHead(element);
		}
		else
		{
			Node* temp = nodeByIndex(index);
			Node* node = new Node(element, temp->next);
			temp->next = node;
			++count;

		}
	}

}

int LinkedList::extract(int index)
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (count == 1)
	{
		return popHead();
	}
	else
	{
		if (index <= 1)
		{
			return popHead();
		}
		else if (index >= count)
		{
			return popTail();
		}
		else
		{
			--count;
			Node* temp = nodeByIndex(index);
			Node* p = temp->next;
			int value = p->data;
			temp->next = p->next;
			delete p;
			return value;
		}
	}
}




void LinkedList::swap(int index1, int index2)
{
	if (index1 > index2)
	{
		int a = 0;
		a = index1;
		index1 = index2;
		index2 = a;
	}
	else if (index1 == index2)
	{
		return;
	}

	if (index1 < 0 && index2 < 0)
	{
		return;
	}
	else if (index1 < 0 && index2 > 0 && index2 <= count)
	{
		index1 = 1;
		index2 = index2;
	}
	else if (index1 < 0 && index2 > count)
	{
		index1 = 1;
		index2 = count;
	}
	else if (index1 > 0 && index1 <= count && index2 > 0 && index2 <= count)
	{
		index1 = index1;
		index2 = index2;
	}
	else if (index1 > 0 && index1 <= count && index2 > count)
	{
		index1 = index1;
		index2 = count;
	}
	else if (index1 > count && index2 > count)
	{
		return;
	}



	if (index2 - index1 == 1)
	{
		int value = extract(index2);
		insert(value, index1);
	}
	else if (index1 == 1 && index2 == count)
	{
		Node* temp2 = nodeByIndex(index2);
		Node* a1 = head;
		Node* b1 = head->next;
		Node* a2 = temp2->next;
		Node* b2 = temp2->next->next;

		head = a2;
		head->next = b1;
		temp2->next = a1;
		temp2->next->next = b2;
		tail = temp2->next;
	}
	else if (index2 == count)
	{
		Node* temp1 = nodeByIndex(index1);
		Node* temp2 = nodeByIndex(index2);
		Node* a1 = temp1->next;
		Node* a2 = temp2->next;
		Node* b1 = temp1->next->next;
		Node* b2 = temp2->next->next;

		temp1->next = a2;
		temp1->next->next = b1;
		temp2->next = a1;
		temp2->next->next = b2;
		tail = temp1->next;
	}
	else if (index1 == 1)
	{
		Node* temp2 = nodeByIndex(index2);
		Node* a1 = head;
		Node* b1 = head->next;
		Node* a2 = temp2->next;
		Node* b2 = temp2->next->next;

		head = a2;
		head->next = b1;
		temp2->next = a1;
		temp2->next->next = b2;
	}
	else
	{
		Node* temp1 = nodeByIndex(index1);
		Node* temp2 = nodeByIndex(index2);
		Node* a1 = temp1->next;
		Node* a2 = temp2->next;
		Node* b1 = temp1->next->next;
		Node* b2 = temp2->next->next;

		temp1->next = a2;
		temp1->next->next = b1;
		temp2->next = a1;
		temp2->next->next = b2;
	}
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}