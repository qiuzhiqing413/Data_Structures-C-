#pragma once
typedef double ElemType;
typedef class ListNode ChList, * ChListPtr, & ChListRef;

class ListNode //����ڵ㡣�����ʾ����һ���������������������ͷ�ڵ㡣
{
private:
	ElemType Data;
	ChListPtr Next;
public:
	ListNode();
	ListNode(ElemType d);
	int List_Length(); //���ظ�����ĳ��ȡ�
	bool List_Insert(ElemType elem, int pos); //��λ��Ϊpos�Ľڵ�ǰ����Ԫ��elem��
	bool List_Remove(int pos); //�Ƴ�λ��Ϊpos�Ľڵ㡣
	bool List_Retrieve(int pos, ElemType* elem); //����λ��Ϊpos�ڵ��ֵ��
	bool List_SetPosition(int pos, ChListPtr* ptr); //����λ��Ϊpos�ڵ�ĵ�ַ��
	bool List_Clear(); //��ձ�����ɾ��ͷ�ڵ㣩
	void List_Destory(); //���ٱ���ɾ��ͷ�ڵ㣩
	bool List_IsEmpty(); //�жϱ��Ƿ�Ϊ�ա�
	bool List_Prior(int pos, ElemType* elem); //����λ��Ϊpos�ڵ��ǰ���ڵ��ֵ��
	bool List_Next(int pos, ElemType* elem); //����λ��Ϊpos�ڵ�ĺ�̽ڵ��ֵ��
	void List_Out(); //��ӡ��

	static int List_Length(ChListPtr L); //���ظ�����ĳ��ȡ�
	static ChListPtr List_Create(ElemType elem[], int n); //��λ��Ϊpos�Ľڵ�ǰ����Ԫ��elem��
	static bool List_Remove(ChListPtr L, int pos); //�Ƴ�λ��Ϊpos�Ľڵ㡣
	static bool List_Insert(ChListPtr L, ElemType elem, int pos); //��λ��Ϊpos�Ľڵ�ǰ����Ԫ��elem��
	static bool List_Retrieve(ChListPtr L, int pos, ElemType* elem); //����λ��Ϊpos�ڵ��ֵ��
	static bool List_SetPosition(ChListPtr L, int pos, ChListPtr* ptr); //����λ��Ϊpos�ڵ�ĵ�ַ��
	static bool List_Clear(ChListPtr L); //��ձ�����ɾ��ͷ�ڵ㣩
	static void List_Destory(ChListPtr L); //���ٱ���ɾ��ͷ�ڵ㣩
	static bool List_IsEmpty(ChListPtr L); //�жϱ��Ƿ�Ϊ�ա�
	static bool List_Prior(ChListPtr L, int pos, ElemType* elem); //����λ��Ϊpos�ڵ��ǰ���ڵ��ֵ��
	static bool List_Next(ChListPtr L, int pos, ElemType* elem); //����λ��Ϊpos�ڵ�ĺ�̽ڵ��ֵ��
	static void List_Out(ChListPtr L); //��ӡ��
};