#include "khb.h"

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	
	for (i = 0; i < 5; i++) { //반복문을 이용해 score배열에 값을 저장.
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++) { //총점 계산
		total = total + score[i];
	}

	avg = (double)total / (sizeof(score) / sizeof(int)); //sizeof(score) => score 배열의 크기 = 배열의 크기 5 * int형 4 = 20이므로 배열 요소의 개수만 구하기 위해선 sizeof(int) 즉 int형의 크기를 나눠줘야함.

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}