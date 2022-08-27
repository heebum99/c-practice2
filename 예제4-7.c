#include "khb.h"

int main() 
{
	//연산의 결과값은 변수에 저장하지 않으면 버려진다.
	int a = 10, b = 20, res;

	a + b; //연산 결과는 버려짐.
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b; //연산 결과를 변수에 저장.
	printf("%d + %d = %d\n", a, b, res);
	return 0;
}