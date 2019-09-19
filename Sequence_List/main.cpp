#include <iostream>
#include "Sequence_List.h"

int main(int argc, char** argv)
{
	ElemType E[10] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	SQList L(E, 10);
	ElemType A[3];
	int P[3];

	L.List_Retrieve(10, A[0]);
	L.List_Locate(3.0, P[0]);
	L.List_Insert(11, 10.0);
	L.List_Remove(1);
	L.List_Prior(2, A[1]);
	L.List_Next(9, A[2]);
	L.List_Out();
	std::cout << L.List_Empty() << std::endl;
	L.List_Clear();
	std::cout << L.List_Empty() << std::endl;
	L.List_Out();
	delete &L;

	return 0;
}