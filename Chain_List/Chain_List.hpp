#pragma once
typedef double ElemType;
typedef class ListNode ChList, * ChListPtr, & ChListRef;

class ListNode //如果表示的是一个单链表，那这个单链表有头节点。
{
private:
	ElemType Data;
	ChListPtr Next;
public:
	ListNode();
	ListNode(ElemType d);
	int List_Length();
	bool List_Insert(ElemType elem, int pos);
	bool List_Remove(int pos);
	bool List_Retrieve(int pos, ElemType* elem);
	bool List_SetPosition(int pos, ChListPtr* ptr);
	void List_Out();
	static int List_Length(ChListPtr L);
	static ChListPtr List_Create(ElemType elem[], int n);
	static bool List_Remove(ChListPtr L, int pos);
	static bool List_Insert(ChListPtr L, ElemType elem, int pos);
	static bool List_Retrieve(ChListPtr L, int pos, ElemType* elem);
	static bool List_SetPosition(ChListPtr L, int pos, ChListPtr* ptr);
	static void List_Out(ChListPtr L);
};