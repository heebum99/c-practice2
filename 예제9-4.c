#include "khb.h"

int main()
{
	//�����Ϳ� const ��� => �����Ϳ� ����Ǵ� �ּҴ� �ٲ� �� ������ �������������ڸ� ���� ������ ���� �ٲ� ���� ����.
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	//*pa = 20; �ϸ� ���� �߻�.
	a = 20;
	printf("���� a �� : %d\n", *pa);

	return 0;
}