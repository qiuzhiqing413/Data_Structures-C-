#include "Chain_List.hpp"

int main()
{
	ElemType E[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	ChListPtr L = ChList::List_Create(E, 10);
	ChListPtr tmp;

	L->List_Remove(5);
	L->List_Retrieve(2, E + 8);
	L->List_SetPosition(3, &tmp);
	L->List_Insert(E[4], 5);
	L->List_Out();

	return 0;
}