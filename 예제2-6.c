#include "khb.h"

int main() 
{
	printf("%.1lf\n", 1e6); //1*10의6제곱을 소수점 1자리까지 표시.
	printf("%.7lf\n", 3.14e-5); //3.14*10의-5제곱을 소수점 7자리까지 표시
	printf("%le\n", 0.0000314); //0.0000314를 지수 형태로 표시
	printf("%.2le\n", 0.0000314); //0.0000314를 지수 형태로 소수점 2자리까지 표시

	return 0;
}