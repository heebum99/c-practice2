#include "khb.h"

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count) //���ȣ�� �Լ�, ��ȯ�� ���ȣ�� �Լ��� ���ʷ� ȣ���ߴ� ���� �ƴ� ������ ȣ���� ������ ���ư�.
{
	printf("apple\n");
	if (count == 3) {
		return;
	}
	fruit(count + 1); 
	printf("jam\n");
}