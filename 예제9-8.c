#include "khb.h"

void swap(void); //�� ������ ���� �ٲٴ� �Լ�

int main()
{
	int a = 10, b = 20; //main�Լ��� a,b => ��������, main�Լ� �ȿ����� ����� �� ����.

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void) {
	int temp;

	//���⼭ a�� b�� main�Լ��� a,b�� �ٸ� ����. �� ���� �����ؼ� ����ؾ���.
	//swap �Լ� �������� a, b������ ������� �ʾұ⿡ ���� �߻�
	temp = a; 
	a = b;
	b = temp;
}