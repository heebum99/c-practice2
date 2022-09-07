#include "khb.h"

int main()
{
	int ary[3];
	int* pa = ary; //배열 ary의 주소를 포인터pa에 저장
	int i;

	*pa = 10; //*(pa+0) = 10, pa[0] = 10과 같은 표현
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1]; //포인터를 배열명처럼 사용

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}