#include "khb.h"

int main()
{
	double weight, height, BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	double m_height = height / 100;

	BMI = weight / (m_height * m_height);

	//BMI�� 20�̻� 25�̸��̸� "ǥ���Դϴ�", "�׷��� ������ ü�߰����� �ʿ��մϴ�"�� ���
	printf("%s\n", BMI >= 20.0 && BMI < 25.0 ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}