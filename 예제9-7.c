#include "khb.h"

void swap(int* pa, int* pb); //두 변수의 값을 바꾸는 함수

int main()
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) {
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;

}