#include "khb.h"

//계산기 프로그램

int main() 
{
	int num1, num2;
	char sign;

	printf("사칙연산 입력(정수) : ");
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