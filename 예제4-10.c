#include "khb.h"

int main() 
{
	//복합대입 연산자(+=,-=,*=,/=,%=)
	int a = 10, b = 20;
	int res = 2;

	a += 20; //a = a + 20
	res *= b + 10; //res = res * (b + 10)

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}