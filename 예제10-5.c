#include "khb.h"

void print_ary(int* pa); //�Լ� ����

int main()
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary); //�迭���� �μ��� �ְ� �Լ� ȣ��

	return 0;
}

void print_ary(int* pa) //�迭���� �Ű������� �ޱ� ���ؼ� �����ͷ� ����
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]); //�����͸� �迭��ó�� ���
	}

}