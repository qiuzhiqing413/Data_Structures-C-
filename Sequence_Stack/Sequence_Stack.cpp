#include "Sequence_Stack.h"
#include <iostream>

SQStack::SQStack()
{
	Top = -1;
	Data[0] = -214967777.2; //无意义的值，VS警告太烦人了
}

SQStack::SQStack(int t, ElemType elem[])
{
	int i;
	Top = t - 1;
	Data[0] = -214967777.2; //理由同上

	for (i = 0; i < t; i++)
	{
		Data[i] = elem[i];
	}
}

void SQStack::Stack_Clear()
{
	Top = -1;
}

void SQStack::Stack_Clear(SQStackRef S)
{
	S.Top = -1;
}

bool SQStack::Stack_IsEmpty()
{
	if (Top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool SQStack::Stack_IsEmpty(SQStackRef S)
{
	if (S.Top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool SQStack::Stack_IsFull()
{
	if (Top >= MAX_STACK_SIZE - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool SQStack::Stack_IsFull(SQStackRef S)
{
	if (S.Top >= MAX_STACK_SIZE - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool SQStack::Stack_Push(ElemType item)
{
	if (Stack_IsEmpty() == true)
	{
		Top = -1;
	}
	if (Stack_IsFull() == true)
	{
		return false;
	}

	Data[++Top] = item;
	return true;
}

bool SQStack::Stack_Push(SQStackRef S, ElemType item)
{
	if (S.Stack_IsEmpty() == true)
	{
		S.Top = -1;
	}
	if (S.Stack_IsFull() == true)
	{
		return false;
	}

	S.Data[++S.Top] = item;
	return true;
}

bool SQStack::Stack_Pop(ElemType& item)
{
	if (Stack_IsEmpty() == true)
	{
		return false;
	}
	
	item = Data[Top--];
	return true;
}

bool SQStack::Stack_Pop(SQStackRef S, ElemType& item)
{
	if (S.Stack_IsEmpty() == true)
	{
		return false;
	}

	item = S.Data[S.Top--];
	return true;
}

bool SQStack::Stack_Top(ElemType& item)
{
	if (Stack_IsEmpty() == true)
	{
		return false;
	}

	item = Data[Top];
	return true;
}

bool SQStack::Stack_Top(SQStackRef S, ElemType& item)
{
	if (S.Stack_IsEmpty() == true)
	{
		return false;
	}

	item = S.Data[S.Top];
	return true;
}

void SQStack::Stack_StdOut()
{
	if (Stack_IsEmpty() == true)
	{
		std::cout << "[]" << std::endl;
	}

	std::cout << "[ ";
	int i;
	for (i = 0; i < Top; i++)
	{
		std::cout << Data[i] << ", ";
	}
	std::cout << Data[i] << " ]" << std::endl;
}

void SQStack::Stack_StdOut(SQStackRef S)
{
	if (S.Stack_IsEmpty() == true)
	{
		std::cout << "[]" << std::endl;
	}

	std::cout << "[ ";
	int i;
	for (i = 0; i < S.Top; i++)
	{
		std::cout << S.Data[i] << ", ";
	}
	std::cout << S.Data[i] << " ]" << std::endl;
}



