#include "khb.h"

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	
	for (i = 0; i < 5; i++) { //�ݺ����� �̿��� score�迭�� ���� ����.
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++) { //���� ���
		total = total + score[i];
	}

	avg = (double)total / (sizeof(score) / sizeof(int)); //sizeof(score) => score �迭�� ũ�� = �迭�� ũ�� 5 * int�� 4 = 20�̹Ƿ� �迭 ����� ������ ���ϱ� ���ؼ� sizeof(int) �� int���� ũ�⸦ ���������.

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}