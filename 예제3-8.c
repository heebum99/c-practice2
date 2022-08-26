#include "khb.h"

int main()
{
	int income = 0; //소득액 초기화
	double tax; //세금
	const double tax_rate = 0.12; //세율 초기화, const변수이므로 초기화된 값을 바꿀 수 없다.

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}