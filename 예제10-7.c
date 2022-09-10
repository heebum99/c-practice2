#include "khb.h"

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max; //최대값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]); //배열 요소의 개수

	input_ary(ary, size); //배열에 값을 입력하는 함수 호출
	max = find_max(ary, size); //배열의 최대값 반환 함수 호출
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) //double 포인터를 매개변수로 선언 => double 배열을 사용하겠다.
{ 
	int i;

	printf("%d개의 실수값 입력 : ", size);
	
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa+i); //&pa[i]
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0]; //첫 번째 배열의 요소를 최대값으로 가정하고 시작

	for (i = 1; i < size; i++)
	{
		if (max < pa[i]) //max값보다 배열 요소값이 더 크다면 배열의 값을 max에 대입
		{
			max = pa[i];
		}
	}

	return max;
}