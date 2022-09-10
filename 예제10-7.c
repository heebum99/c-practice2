#include "khb.h"

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max; //�ִ밪�� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]); //�迭 ����� ����

	input_ary(ary, size); //�迭�� ���� �Է��ϴ� �Լ� ȣ��
	max = find_max(ary, size); //�迭�� �ִ밪 ��ȯ �Լ� ȣ��
	printf("�迭�� �ִ밪 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) //double �����͸� �Ű������� ���� => double �迭�� ����ϰڴ�.
{ 
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa+i); //&pa[i]
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0]; //ù ��° �迭�� ��Ҹ� �ִ밪���� �����ϰ� ����

	for (i = 1; i < size; i++)
	{
		if (max < pa[i]) //max������ �迭 ��Ұ��� �� ũ�ٸ� �迭�� ���� max�� ����
		{
			max = pa[i];
		}
	}

	return max;
}