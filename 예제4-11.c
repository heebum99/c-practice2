#include "khb.h"

int main() 
{
	//�޸�(,)������ => ���� �������� �ǿ����ڰ� ���� �����
	int a = 10, b = 20;
	int res;

	res = (++a, ++b); //���� �������� �ǿ����� = b, res == b

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}