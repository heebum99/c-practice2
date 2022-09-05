#include "khb.h"

//�̴� ���� ���α׷�
//Ű����� �Ǽ� 3���� �Է¹޾� ū���� ������ ���� �� ����ϴ� ���α׷�
//line_up �Լ��ȿ��� swap�Լ� ȣ��

void swap(double* pa, double* pb); //�� �Ǽ��� �ٲٴ� �Լ�
void line_up(double* maxp, double* midp, double* minp); //�Լ� ����

int main()
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min); //�� ������ ���� �����ϴ� �Լ�
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) 
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}

void line_up(double* maxp, double* midp, double* minp) 
{
	//�ִ밪 max ���ϱ�
	if (*maxp < *midp) {
		swap(maxp, midp);
		if (*maxp < *minp) {
			swap(maxp, minp);
		}
	}
	else if (*maxp < *minp) {
		swap(maxp, minp);
	}

	//�߰��� mid ���ϱ�
	if (*midp < *minp) {
		swap(midp, minp);
	}

	//�ּڰ� min�� �ڵ����� ����
}

/*
void line_up(double *maxp, double *midp, double *minp)

{

	 if (*maxp < *midp) swap(maxp, midp);

	 if (*maxp < *minp) swap(maxp, minp);

	 if (*midp < *minp) swap(midp, minp);

}
*/