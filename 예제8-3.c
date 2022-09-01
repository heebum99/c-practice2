#include "khb.h"

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count; //배열 요소의 개수

	count = sizeof(score) / sizeof(score[0]); //배열 요소의 개수 = score 배열의 크기 / 배열 요소 한 개의 크기

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];
	}

	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("평균 : %.1lf\n", avg);
	return 0;
}