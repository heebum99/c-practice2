#include "khb.h"

int main()
{
	int income = 0; //�ҵ�� �ʱ�ȭ
	double tax; //����
	const double tax_rate = 0.12; //���� �ʱ�ȭ, const�����̹Ƿ� �ʱ�ȭ�� ���� �ٲ� �� ����.

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}