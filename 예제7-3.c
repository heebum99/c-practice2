#include "khb.h"

void print_char(char ch, int count); //�Լ� ����

int main()
{
	print_char('@', 5); //�Լ� ȣ��

	return 0;
}

void print_char(char ch, int count) { //�Լ� ����
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}

	return; //��ȯ ���� ���� �Լ��̹Ƿ� return ��������.
}