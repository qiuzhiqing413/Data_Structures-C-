//顺序表并不涉及太多的指针操作，因此这里尝试用引用代替大部分指针。
#pragma once

const int LIST_INIT_SIZE = 100;

class SQList
{
private:
	ElemType* Data;
	int Length;
	int ListSize;
public:
	SQList();
	SQList(ElemType elem[], int n);
	bool List_Retrieve(int pos, ElemType &elem); //按位置查找
	static bool List_Retrieve(SQListRef L, int pos, ElemType &elem); //按位置查找
	bool List_Locate(ElemType elem, int& pos); //按值查找
	static bool List_Locate(SQListRef L, ElemType elem, int& pos); //按值查找
	bool List_Insert(int pos, ElemType elem); //在pos位置前插入elem
	static bool List_Insert(SQListRef L, int pos, ElemType elem); //在pos位置前插入elem
	bool List_Remove(int pos); //删除位置为pos的元素
	static bool List_Remove(SQListRef L, int pos); //删除位置为pos的元素
	void List_Clear(); //清空顺序表
	static void List_Clear(SQListRef L); //清空顺序表
	bool List_Empty(); //判空
	static bool List_Empty(SQListRef L); //判空
	bool List_Prior(int pos, ElemType& elem); //求位置为pos元素的前驱元素
	static bool List_Prior(SQListRef L, int pos, ElemType& elem); //求位置为pos元素的前驱元素
	bool List_Next(int pos, ElemType& elem); //求位置为pos元素的后继元素
	static bool List_Next(SQListRef L, int pos, ElemType& elem); //求位置为pos元素的后继元素
	void List_Out(); //标准输出顺序表的元素
	static void List_Out(SQListRef L); //标准输出顺序表的元素
};

typedef double ElemType;
typedef class SQList* SQListPtr, & SQListRef;