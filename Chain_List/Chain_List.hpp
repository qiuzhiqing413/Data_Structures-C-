#pragma once
typedef double ElemType;
typedef class ListNode ChList, * ChListPtr, & ChListRef;

class ListNode //链表节点。如果表示的是一个单链表，那这个单链表有头节点。
{
private:
	ElemType Data;
	ChListPtr Next;
public:
	ListNode();
	ListNode(ElemType d);
	int List_Length(); //返回该链表的长度。
	bool List_Insert(ElemType elem, int pos); //在位置为pos的节点前插入元素elem。
	bool List_Remove(int pos); //移除位置为pos的节点。
	bool List_Retrieve(int pos, ElemType* elem); //返回位置为pos节点的值。
	bool List_SetPosition(int pos, ChListPtr* ptr); //返回位置为pos节点的地址。
	bool List_Clear(); //清空表。（不删除头节点）
	void List_Destory(); //销毁表。（删除头节点）
	bool List_IsEmpty(); //判断表是否为空。
	bool List_Prior(int pos, ElemType* elem); //返回位置为pos节点的前驱节点的值。
	bool List_Next(int pos, ElemType* elem); //返回位置为pos节点的后继节点的值。
	void List_Out(); //打印表。

	static int List_Length(ChListPtr L); //返回该链表的长度。
	static ChListPtr List_Create(ElemType elem[], int n); //在位置为pos的节点前插入元素elem。
	static bool List_Remove(ChListPtr L, int pos); //移除位置为pos的节点。
	static bool List_Insert(ChListPtr L, ElemType elem, int pos); //在位置为pos的节点前插入元素elem。
	static bool List_Retrieve(ChListPtr L, int pos, ElemType* elem); //返回位置为pos节点的值。
	static bool List_SetPosition(ChListPtr L, int pos, ChListPtr* ptr); //返回位置为pos节点的地址。
	static bool List_Clear(ChListPtr L); //清空表。（不删除头节点）
	static void List_Destory(ChListPtr L); //销毁表。（删除头节点）
	static bool List_IsEmpty(ChListPtr L); //判断表是否为空。
	static bool List_Prior(ChListPtr L, int pos, ElemType* elem); //返回位置为pos节点的前驱节点的值。
	static bool List_Next(ChListPtr L, int pos, ElemType* elem); //返回位置为pos节点的后继节点的值。
	static void List_Out(ChListPtr L); //打印表。
};