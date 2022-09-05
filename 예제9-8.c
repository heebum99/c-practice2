#include "khb.h"

void swap(void); //두 변수의 값을 바꾸는 함수

int main()
{
	int a = 10, b = 20; //main함수의 a,b => 지역변수, main함수 안에서만 사용할 수 있음.

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void) {
	int temp;

	//여기서 a와 b는 main함수의 a,b와 다른 변수. 즉 새로 선언해서 사용해야함.
	//swap 함수 내에서는 a, b변수가 선언되지 않았기에 에러 발생
	temp = a; 
	a = b;
	b = temp;
}