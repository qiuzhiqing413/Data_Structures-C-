#pragma once

class ChStack
{
private:
	ElemType Data;
	ChStackPtr Next;
public:

};

typedef double ElemType;
typedef class ChStack StackNode, * ChStackPtr, & ChStackRef;