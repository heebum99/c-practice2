#include "khb.h"

int main()
{
	int ary[3];
	int* pa = ary; //�迭 ary�� �ּҸ� ������pa�� ����
	int i;

	*pa = 10; //*(pa+0) = 10, pa[0] = 10�� ���� ǥ��
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1]; //�����͸� �迭��ó�� ���

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}