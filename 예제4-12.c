#include "khb.h"

int main() 
{
	//조건 연산자( ? : ) => 삼항 연산자
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; //a>b가 참이면 결과값이 a, 거짓이면 b

	printf("큰 값 : %d\n", res);

	return 0;
}