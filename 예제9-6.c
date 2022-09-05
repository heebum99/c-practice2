#include "khb.h"

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p; //pd는 double형 포인터, p는 int형 포인터이기 때문에 대입연산 불가. 
	printf("%lf\n", *pd);

	return 0;
}