#pragma once

typedef int Item;

namespace {
	struct Node
	{
		Node * next;
		Item item;
	};
}
class List
{
private:
	Node * head;
public:
	List();
	~List();
	bool Add(Item item);
	bool IsFull();
	bool IsEmpty();
	void Visit(void(*pf)(Item &));
};
