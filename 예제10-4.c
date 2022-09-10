#include "khb.h"

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary; //ary[0]
	int* pb = pa + 3; //ary[3]

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);

	pa++; //ary[1]
	printf("pb - pa : %u\n", pb - pa); //pb - pa = 2*4(int) = 8 / sizeof(int) = 2

	printf("앞에 있는 배열 요소의 값 출력 : ");
	
	if (pa < pb)
	{
		printf("%d\n", *pa);
	}
	else
	{
		printf("%d\n", *pb);
	}
	return 0;
}