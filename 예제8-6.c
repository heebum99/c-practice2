#include "khb.h"

int main()
{
	//puts(), gets() �Լ�
	//puts() => ������ ������ ���ڿ� �Է� �Լ�
	//gets() => ���ڿ� ��� �Լ�
	char str[80];
	
	printf("���ڿ� �Է� : ");
	gets(str); //��ĭ�� ������ ���ڿ� �� �� �Է� 
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}