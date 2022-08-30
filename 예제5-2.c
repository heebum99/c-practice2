#include "khb.h"

int main() 
{
	int a = 10;

	if (a >= 0) { //조건문에 만족하면 a = 1
		a = 1;
	}
	else { //아니면 a = -1
		a = -1;
	}

	printf("a: %d\n", a);

	return 0;
}