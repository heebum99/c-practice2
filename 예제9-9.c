#include "khb.h"

void swap(int x, int y); //두 변수의 값을 바꾸는 함수

int main()
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b); //swap함수를 통해서 변수의 값을 바꾸려했지만 swap 함수에서 값을 복사해서 사용했기 때문에 swap 함수 내에서만 값의 교환이 일어남 => main함수에는 영향x

	return 0;
}

void swap(int x, int y) 
{
	int temp;

	temp = x;
	x = y;
	y = temp;

}