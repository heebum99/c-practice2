#include "khb.h"

int main()
{
	int a = 10, b = 15, total; //변수 선언 및 초기화
	double avg; //평균을 저장할 변수 선언
	int* pa, * pb; //포인터 선언
	int* pt = &total; //포인터 선언 및 초기화
	double* pg = &avg; //포인터 선언 및 초기화

	pa = &a; //포인터 pa에 a의 주소 대입
	pb = &b; //포인터 pb에 b의 주소 대입

	*pt = *pa + *pb; //포인터 pt가 가리키는 total에 pa가 가리키는 a의 값과 pb가 가리키는 b의 값을 더해 저장.
	*pg = *pt / 2.0; //포인터 pg가 가리키는 avg에 total/2.0 의 값을 저장.

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}