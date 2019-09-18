//˳������漰̫���ָ�������������ﳢ�������ô���󲿷�ָ�롣
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
	bool List_Retrieve(int pos, ElemType &elem); //��λ�ò���
	static bool List_Retrieve(SQListRef L, int pos, ElemType &elem); //��λ�ò���
	bool List_Locate(ElemType elem, int& pos); //��ֵ����
	static bool List_Locate(SQListRef L, ElemType elem, int& pos); //��ֵ����
	bool List_Insert(int pos, ElemType elem); //��posλ��ǰ����elem
	static bool List_Insert(SQListRef L, int pos, ElemType elem); //��posλ��ǰ����elem
	bool List_Remove(int pos); //ɾ��λ��Ϊpos��Ԫ��
	static bool List_Remove(SQListRef L, int pos); //ɾ��λ��Ϊpos��Ԫ��
	void List_Clear(); //���˳���
	static void List_Clear(SQListRef L); //���˳���
	bool List_Empty(); //�п�
	static bool List_Empty(SQListRef L); //�п�
	bool List_Prior(int pos, ElemType& elem); //��λ��ΪposԪ�ص�ǰ��Ԫ��
	static bool List_Prior(SQListRef L, int pos, ElemType& elem); //��λ��ΪposԪ�ص�ǰ��Ԫ��
	bool List_Next(int pos, ElemType& elem); //��λ��ΪposԪ�صĺ��Ԫ��
	static bool List_Next(SQListRef L, int pos, ElemType& elem); //��λ��ΪposԪ�صĺ��Ԫ��
	void List_Out(); //��׼���˳����Ԫ��
	static void List_Out(SQListRef L); //��׼���˳����Ԫ��
};

typedef double ElemType;
typedef class SQList* SQListPtr, & SQListRef;