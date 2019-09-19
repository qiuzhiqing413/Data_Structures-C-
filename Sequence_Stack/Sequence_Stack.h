const int MAX_STACK_SIZE = 100;

typedef class SQStack* SQStackPtr, & SQStackRef;
typedef double ElemType;

class SQStack //��˳��ջ��Topֵ��0��ʼ����
{
private:
	int Top;
	ElemType Data[MAX_STACK_SIZE];
public:
	SQStack();
	SQStack(int t, ElemType elem[]);
	void Stack_Clear(); //���ջ
	static void Stack_Clear(SQStackRef S); //���ջ
	bool Stack_IsEmpty(); //�п�
	static bool Stack_IsEmpty(SQStackRef S); //�п�
	bool Stack_IsFull(); //����
	static bool Stack_IsFull(SQStackRef S); //����
	bool Stack_Push(ElemType item); //��itemѹ��ջ
	static bool Stack_Push(SQStackRef S, ElemType item); //��itemѹ��ջ
	bool Stack_Pop(ElemType& item); //��Ԫ�س�ջ
	static bool Stack_Pop(SQStackRef S, ElemType& item); //��Ԫ�س�ջ
	bool Stack_Top(ElemType& item); //ȡջ��Ԫ��
	static bool Stack_Top(SQStackRef S, ElemType& item); //ȡջ��Ԫ��
	void Stack_StdOut(); //��׼���ջԪ�أ���ջ�׵�ջͷ����
	static void Stack_StdOut(SQStackRef S); //��׼���ջԪ�أ���ջ�׵�ջͷ����
};