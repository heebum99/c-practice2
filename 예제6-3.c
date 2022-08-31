#include "khb.h"

int main() 
{
	int a = 1;

	do { //do~while문은 조건과 상관없이 무조건 한번 이상은 실행문이 실행된다.
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);

	return 0;
}