#include "khb.h"

int get_num(void); //�Ű� ���� void�� ���� ����.

int main() 
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);

	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}