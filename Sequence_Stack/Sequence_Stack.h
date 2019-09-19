const int MAX_STACK_SIZE = 100;

typedef class SQStack* SQStackPtr, & SQStackRef;
typedef double ElemType;

class SQStack //此顺序栈的Top值从0开始计算
{
private:
	int Top;
	ElemType Data[MAX_STACK_SIZE];
public:
	SQStack();
	SQStack(int t, ElemType elem[]);
	void Stack_Clear(); //清空栈
	static void Stack_Clear(SQStackRef S); //清空栈
	bool Stack_IsEmpty(); //判空
	static bool Stack_IsEmpty(SQStackRef S); //判空
	bool Stack_IsFull(); //判满
	static bool Stack_IsFull(SQStackRef S); //判满
	bool Stack_Push(ElemType item); //把item压入栈
	static bool Stack_Push(SQStackRef S, ElemType item); //把item压入栈
	bool Stack_Pop(ElemType& item); //顶元素出栈
	static bool Stack_Pop(SQStackRef S, ElemType& item); //顶元素出栈
	bool Stack_Top(ElemType& item); //取栈顶元素
	static bool Stack_Top(SQStackRef S, ElemType& item); //取栈顶元素
	void Stack_StdOut(); //标准输出栈元素（从栈底到栈头部）
	static void Stack_StdOut(SQStackRef S); //标准输出栈元素（从栈底到栈头部）
};