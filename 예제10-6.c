#include "khb.h"

void print_ary(int* pa, int size);

int main()
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	int ary1_size = sizeof(ary1) / sizeof(ary1[0]); //ary1배열 요소의 개수 
	int ary2_size = sizeof(ary2) / sizeof(ary2[0]);

	print_ary(ary1, ary1_size);
	printf("\n");
	print_ary(ary2, ary2_size);

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", *(pa+i)); //pa[i]
	}

}