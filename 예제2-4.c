#include "khb.h"

int main () 
{
	printf("%d\n", 10); //변환 문자 %d는 정수형
	printf("%lf\n", 3.4); //변환 문자 %lf는 실수형
	printf("%.1lf\n", 3.45); //%.1lf는 소수점 첫째자리까지 출력.(반올림)
	printf("%.10lf\n", 3.4); //%.10lf는 소수점 10자리까지 출력.

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}