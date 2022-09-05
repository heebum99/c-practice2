#include "khb.h"

//미니 정렬 프로그램
//키보드로 실수 3개를 입력받아 큰숫자 순으로 정렬 후 출력하는 프로그램
//line_up 함수안에서 swap함수 호출

void swap(double* pa, double* pb); //두 실수를 바꾸는 함수
void line_up(double* maxp, double* midp, double* minp); //함수 선언

int main()
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min); //세 변수의 값을 정렬하는 함수
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) 
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}

void line_up(double* maxp, double* midp, double* minp) 
{
	//최대값 max 구하기
	if (*maxp < *midp) {
		swap(maxp, midp);
		if (*maxp < *minp) {
			swap(maxp, minp);
		}
	}
	else if (*maxp < *minp) {
		swap(maxp, minp);
	}

	//중간값 mid 구하기
	if (*midp < *minp) {
		swap(midp, minp);
	}

	//최솟값 min은 자동으로 선택
}

/*
void line_up(double *maxp, double *midp, double *minp)

{

	 if (*maxp < *midp) swap(maxp, midp);

	 if (*maxp < *minp) swap(maxp, minp);

	 if (*midp < *minp) swap(midp, minp);

}
*/