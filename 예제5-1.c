#include "khb.h"

int main() 
{
	int a = 20;
	int b = 0;

	if (a > 10) { //조건문에 만족하면 실행문 실행.
		b = a;
	}

	printf("a : %d, b : %d", a, b);

	return 0;
}