#include "Sequence_List.h"
#include <iostream>

SQList::SQList() : Length(0), ListSize(0)
{
	Data = new ElemType[LIST_INIT_SIZE];
}

SQList::SQList(ElemType elem[], int n) : Length(n), ListSize(n* ELEMENT_LENGTH)
{
	int i;
	Data = new ElemType[LIST_INIT_SIZE];
	for (i = 0; i < n; i++)
	{
		Data[i] = elem[i];
	}
}

bool SQList::List_Retrieve(int pos, ElemType& elem)
{
	if (pos > Length || pos <= 0)
	{
		return false;
	}
	elem = Data[pos - 1];
	return true;
}

bool SQList::List_Retrieve(SQListRef L, int pos, ElemType& elem)
{
	if (pos > L.Length || pos <= 0)
	{
		return false;
	}
	elem = L.Data[pos - 1];
	return true;
}

bool SQList::List_Locate(ElemType elem, int& pos)
{
	int i;
	for (i = 0; i < Length; i++)
	{
		if (elem == Data[i])
		{
			pos = i + 1;
			return true;
		}
	}
	return false;
}

bool SQList::List_Locate(SQListRef L, ElemType elem, int& pos)
{
	int i;
	for (i = 0; i < L.Length; i++)
	{
		if (elem == L.Data[i])
		{
			pos = i + 1;
			return true;
		}
	}
	return false;
}

bool SQList::List_Insert(int pos, ElemType elem)
{
	if (pos > Length + 1 || pos <= 0)
	{
		return false;
	}
	if (Length >= LIST_INIT_SIZE - 1)
	{
		return false;
	}

	int i;
	for (i = Length; i >= pos - 1; i--)
	{
		Data[i] = Data[i - 1];
	}
	Data[i] = elem;
	return true;
}

bool SQList::List_Insert(SQListRef L, int pos, ElemType elem)
{
	if (pos > L.Length + 1 || pos <= 0)
	{
		return false;
	}
	if (L.Length >= LIST_INIT_SIZE - 1)
	{
		return false;
	}

	int i;
	for (i = L.Length; i >= pos - 1; i--)
	{
		L.Data[i] = L.Data[i - 1];
	}
	L.Data[i] = elem;
	return true;
}

bool SQList::List_Remove(int pos)
{
	if (Length >= LIST_INIT_SIZE)
	{
		return false;
	}

	int i;
	for (i = pos; i < Length; i++)
	{
		Data[pos - 1] = Data[pos];
	}
	Length -= 1;
	return true;
}

bool SQList::List_Remove(SQListRef L, int pos)
{
	if (L.Length >= LIST_INIT_SIZE)
	{
		return false;
	}

	int i;
	for (i = pos; i < L.Length; i++)
	{
		L.Data[pos - 1] = L.Data[pos];
	}
	L.Length -= 1;
	return true;
}

void SQList::List_Clear()
{

}

void SQList::List_Clear(SQListRef L)
{
}

bool SQList::List_Empty()
{
	return false;
}

bool SQList::List_Empty(SQListRef L)
{
	return false;
}

bool SQList::List_Prior(int pos, ElemType& elem)
{
	return false;
}

bool SQList::List_Prior(SQListRef L, int pos, ElemType& elem)
{
	return false;
}

bool SQList::List_Next(int pos, ElemType& elem)
{
	return false;
}

bool SQList::List_Next(SQListRef L, int pos, ElemType& elem)
{
	return false;
}

void SQList::List_Out()
{
}

void SQList::List_Out(SQListRef L)
{
}