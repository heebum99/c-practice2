#include "khb.h"

int main()
{
	char str[80] = "applejam"; //���ڿ� �ʱ�ȭ

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str); //scanf���� �迭�� �Է¹��� �� &�ʿ� x
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}