#include "khb.h"

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p; //pd�� double�� ������, p�� int�� �������̱� ������ ���Կ��� �Ұ�. 
	printf("%lf\n", *pd);

	return 0;
}