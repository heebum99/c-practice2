#include "khb.h"

void swap(int x, int y); //�� ������ ���� �ٲٴ� �Լ�

int main()
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b); //swap�Լ��� ���ؼ� ������ ���� �ٲٷ������� swap �Լ����� ���� �����ؼ� ����߱� ������ swap �Լ� �������� ���� ��ȯ�� �Ͼ => main�Լ����� ����x

	return 0;
}

void swap(int x, int y) 
{
	int temp;

	temp = x;
	x = y;
	y = temp;

}