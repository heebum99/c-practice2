#include "khb.h"

int main() 
{
	int a = 10;

	if (a >= 0) { //���ǹ��� �����ϸ� a = 1
		a = 1;
	}
	else { //�ƴϸ� a = -1
		a = -1;
	}

	printf("a: %d\n", a);

	return 0;
}