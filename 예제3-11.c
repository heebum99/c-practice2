#include "khb.h"

int main() 
{
	char grade; //����
	char name[20]; //���ڿ�

	printf("���� �Է� : ");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}