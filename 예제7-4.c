#include "khb.h"

void print_line(); //�Լ� ����

int main()
{
	print_line(); //�Լ� ȣ��
	printf("�й�	�̸�	����	����\n");
	print_line();

	return 0;
}

void print_line() { //�Լ� ����
	int i;

	for (i = 0; i < 50; i++) {
		printf("-");
	}

	printf("\n");
}