#include "khb.h"

//���� ���α׷�

int main() 
{
	int num1, num2;
	char sign;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d %c %d", &num1, &sign, &num2);

	switch (sign)
	{
	case '+':
		printf("%d %c %d = %d", num1, sign, num2, num1+num2);
		break;
	case '-':
		printf("%d %c %d = %d", num1, sign, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d", num1, sign, num2, num1 * num2);
		break;
	case '/':
		printf("%d %c %d = %d", num1, sign, num2, num1 / num2);
		break;
	default:
		break;
	}
	

	return 0;
}