#include "Sequence_Stack.h"
#include <iostream>

int main(int argc, char* argv[])
{
	ElemType X[10] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	ElemType Y[3];
	SQStack S(10, X);
	int i;

	for (i = 0; i < 90; i++)
	{
		S.Stack_Push((ElemType)i);
	}
	std::cout << S.Stack_IsFull() << std::endl;
	S.Stack_StdOut();
	S.Stack_Pop(Y[0]);
	S.Stack_Top(Y[1]);
	S.Stack_Clear();
	std::cout << S.Stack_IsEmpty() << std::endl;
	
	return 0;
}