#include "khb.h"

int main()
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) { //�ݺ��� 10�� �ݺ�
		sum += i;
		if (sum > 30) { //sum�� 30�ʰ���� �ݺ��� ����.
			break;
		}
	}

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}