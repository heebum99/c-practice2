#include "khb.h"

int main()
{
	int a = 10, b = 15, total; //���� ���� �� �ʱ�ȭ
	double avg; //����� ������ ���� ����
	int* pa, * pb; //������ ����
	int* pt = &total; //������ ���� �� �ʱ�ȭ
	double* pg = &avg; //������ ���� �� �ʱ�ȭ

	pa = &a; //������ pa�� a�� �ּ� ����
	pb = &b; //������ pb�� b�� �ּ� ����

	*pt = *pa + *pb; //������ pt�� ����Ű�� total�� pa�� ����Ű�� a�� ���� pb�� ����Ű�� b�� ���� ���� ����.
	*pg = *pt / 2.0; //������ pg�� ����Ű�� avg�� total/2.0 �� ���� ����.

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}