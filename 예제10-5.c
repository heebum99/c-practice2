#include "khb.h"

void print_ary(int* pa); //함수 선언

int main()
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary); //배열명을 인수로 주고 함수 호출

	return 0;
}

void print_ary(int* pa) //배열명을 매개변수로 받기 위해서 포인터로 선언
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]); //포인터를 배열명처럼 사용
	}

}