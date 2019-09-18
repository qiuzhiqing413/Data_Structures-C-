#include <iostream>
#include "Chain_List.hpp"

ListNode::ListNode()
{
	Data = (ElemType)0;
	Next = nullptr;
}

ListNode::ListNode(ElemType d)
{
	Data = d;
	Next = nullptr;
}

int ChList::List_Length()
{
	ChListPtr L = this;
	int n = 0;

	while (L->Next != nullptr)
	{
		n++;
		L = L->Next;
	}

	return n;
}

int ChList::List_Length(ChListPtr L) //注意，这个地方不必在int前加上static。重载函数会自动识别其是不是静态的。
{
	ChListPtr tmp = L;
	int n = 0;

	while (L->Next != nullptr)
	{
		n++;
		L = L->Next;
	}

	return n;
}

bool ChList::List_Insert(ElemType elem, int pos)
{
	int ListLen = List_Length();
	if (pos <= 0 || pos > ListLen + 1)
	{
		return false;
	}
	ChListPtr toIns = new ChList;
	toIns->Data = elem;
	ChListPtr tmp = this;

	int i;
	for (i = 0; i < pos - 1; i++)
	{
		tmp = tmp->Next;
	}
	toIns->Next = tmp->Next;
	tmp->Next = toIns;

	return true;
}

bool ChList::List_Insert(ChListPtr L, ElemType elem, int pos)
{
	int ListLen = List_Length(L);
	if (pos <= 0 || pos > ListLen + 1)
	{
		return false;
	}
	ChListPtr toIns = new ChList;
	toIns->Data = elem;
	ChListPtr tmp = L;

	int i;
	for (i = 0; i < pos - 1; i++)
	{
		tmp = tmp->Next;
	}
	toIns->Next = tmp->Next;
	tmp->Next = toIns;

	return true;
}

bool ChList::List_Remove(int pos)
{
	int ListLen = List_Length();
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = this;
	for (i = 0; i < pos - 1; i++)
	{
		tmp = tmp->Next;
	}

	ChListPtr tmp1 = tmp->Next;
	tmp->Next = tmp->Next->Next;
	delete tmp1;

	return true;
}

bool ChList::List_Remove(ChListPtr L, int pos)
{
	int ListLen = List_Length(L);
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = L;
	for (i = 0; i < pos - 1; i++)
	{
		tmp = tmp->Next;
	}

	ChListPtr tmp1 = tmp->Next;
	tmp->Next = tmp->Next->Next;
	delete tmp1;

	return true;
}

bool ChList::List_Retrieve(int pos, ElemType* elem)
{
	int ListLen = List_Length();
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = this;
	for (i = 0; i < pos; i++)
	{
		tmp = tmp->Next;
	}

	*elem = tmp->Data;

	return true;
}

bool ChList::List_Retrieve(ChListPtr L, int pos, ElemType* elem)
{
	int ListLen = List_Length(L);
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = L;
	for (i = 0; i < pos; i++)
	{
		tmp = tmp->Next;
	}

	*elem = tmp->Data;

	return true;
}

bool ChList::List_SetPosition(int pos, ChListPtr* ptr)
{
	int ListLen = List_Length();
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = this;
	for (i = 0; i < pos; i++)
	{
		tmp = tmp->Next;
	}

	*ptr = tmp;

	return true;
}

bool ChList::List_SetPosition(ChListPtr L, int pos, ChListPtr* ptr)
{
	int ListLen = List_Length(L);
	if (pos <= 0 || pos > ListLen)
	{
		return false;
	}

	int i;
	ChListPtr tmp = L;
	for (i = 0; i < pos; i++)
	{
		tmp = tmp->Next;
	}

	*ptr = tmp;

	return true;
}

ChListPtr ChList::List_Create(ElemType elem[], int n)
{
	ChListPtr head = new ChList;
	head->Next = nullptr;
	ChListPtr L = head;

	int i;
	for (i = 0; i < n; i++)
	{
		ChListPtr tmp = new ChList;
		tmp->Data = elem[i];
		tmp->Next = nullptr;
		L->Next = tmp;
		L = L->Next;
	}

	return head;
}

void ChList::List_Out()
{
	ChListPtr tmp = this->Next;
	std::cout << "[ ";
	if (tmp == nullptr)
	{
		std::cout << "]";
		return;
	}
	while (tmp->Next != nullptr)
	{
		std::cout << tmp->Data << ", ";
		tmp = tmp->Next;
	}
	std::cout << tmp->Data << " ]" << std::endl;
}

void ChList::List_Out(ChListPtr L)
{
	ChListPtr tmp = L->Next;
	std::cout << "[ ";
	if (tmp == nullptr)
	{
		std::cout << "]";
		return;
	}
	while (tmp->Next != nullptr)
	{
		std::cout << tmp->Data << ", ";
		tmp = tmp->Next;
	}
	std::cout << tmp->Data << " ]" << std::endl;
}