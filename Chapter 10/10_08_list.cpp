#include "list.h"
#include <iostream>

List::List()
{
	head = nullptr;
}

List::~List()
{
	Node * temp = head->next;
	while (head != nullptr)
	{
		temp = head->next;
		delete head;
		head = temp;		
	}	
}

bool List::Add(Item item)
{
	if (!IsFull())
	{
		Node * temp = head;
		if (IsEmpty())
		{
			head = new Node;
			head->next = nullptr;
			head->item = item;
		}
		else
		{
			while (temp->next != nullptr)
				temp = temp->next;
			
			temp->next = new Node;
			temp = temp->next;
			temp->item = item;
			temp->next = nullptr;			
		}
		return 1;
	}
	else
		{
		std::cout << "List is full.\n";
		return 0;
		}
}
bool List::IsFull()
{
	try
	{
		Node * temp = new Node;
	}
	catch (std::bad_alloc)
	{
		return 1;
	}
	return 0;
}

bool List::IsEmpty()
{
	if (head == nullptr)
		return 1;
	else
		return 0;
}

void List::Visit(void(*pf)(Item &))
{
	Node * temp = head;
	while (temp != nullptr)
	{
		pf(temp->item);
		temp = temp->next;
	}
}
