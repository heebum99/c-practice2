#include "khb.h"

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count) //���ȣ���Լ�
{
	printf("apple\n");
	if (count == 3) { //count�� 3�̵Ǹ� return�� ���� ��ȯ �� ����.
		return;
	}
	fruit(count + 1); //�ڱ� �ڽ��� ȣ��
}