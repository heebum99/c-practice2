#include "khb.h"

//1���� n������ ���� ���ȣ�� �Լ��� �̿��� �ۼ�.

int rec_func(int n); //���ȣ�� �Լ�

int main()
{
	int sum, n=10;
	sum = rec_func(n); //1���� 10������ ���� ���ȣ�� �Լ��� ���.
	
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}

int rec_func(int n) 
{
	

	if (n == 1) {
		return 1;
	}

	else {
		return n + rec_func(n - 1); //10+rec(9) => 10+9+.....+2+rec(1) => 10+9+8....+2+1
	}
}