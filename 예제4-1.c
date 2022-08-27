#include "khb.h"

int main() 
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;

	sum = a + b; //두 수의 합
	sub = a - b; //두 수의 차
	mul = a * b; //두 수의 곱
	inv = -a; //a의 부호를 바꿈.

	printf("a의 값 :%d, b의 값:%d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	return 0;
}