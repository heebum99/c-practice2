#include "khb.h"

int main() 
{
	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0; //실수와 실수의 나누기 연산 => 결과: 실수
	banana = 5 / 2; //정수와 정수의 나누기 연산 => 결과: 정수
	orange = 5 % 2; //정수와 정수의 나머지 연산 => 결과: 정수

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);
	printf("정수와 실수의 나누기 연산 : %.1lf", apple / banana); //정수와 실수의 나누기 연산은 결과가 실수로 나옴.

	return 0;
}