#include "khb.h"

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count; //�迭 ����� ����

	count = sizeof(score) / sizeof(score[0]); //�迭 ����� ���� = score �迭�� ũ�� / �迭 ��� �� ���� ũ��

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

	printf("��� : %.1lf\n", avg);
	return 0;
}