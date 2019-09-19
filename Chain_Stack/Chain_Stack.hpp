#pragma once
typedef double ElemType;
typedef class ChStack StackNode, * ChStackPtr, & ChStackRef;

class ChStack
{
private:
	ElemType Data;
	ChStackPtr Next;
public:
	ChStack();

};