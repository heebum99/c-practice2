#include "khb.h"

int main() 
{
	//연산자 우선순위와 연산 방향
	//단항 -> 이항 -> 삼항 연산자 순서
	//산술 -> 비트 -> 관계 -> 논리 연산자 순서

	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res);

	res = ++a * 3;
	printf("res = %d\n", res);

	res = a > b && a != 5;
	printf("res = %d\n", res);

	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;
}