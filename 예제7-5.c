#include "khb.h"

void fruit(); //�Լ� ����

int main()
{
	fruit(); //�Լ� ȣ��

	return 0;
}

void fruit() //�Լ� ����
{ 
	printf("apple\n");

	fruit(); //�ڱ� �ڽ��� ȣ�� => ���ȣ�� �Լ�
}