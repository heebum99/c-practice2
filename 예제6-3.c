#include "khb.h"

int main() 
{
	int a = 1;

	do { //do~while���� ���ǰ� ������� ������ �ѹ� �̻��� ���๮�� ����ȴ�.
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);

	return 0;
}