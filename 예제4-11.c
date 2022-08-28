#include "khb.h"

int main() 
{
	//콤마(,)연산자 => 가장 오른쪽의 피연산자가 최종 결과값
	int a = 10, b = 20;
	int res;

	res = (++a, ++b); //가장 오른쪽의 피연산자 = b, res == b

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}