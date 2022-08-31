#include "khb.h"

int sum(int x, int y); //sum 함수 선언

int main() 
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);
	
	return 0;
}

int sum(int x, int y) {
	int temp;

	temp = x + y;

	return temp;
}