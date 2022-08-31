#include "khb.h"

void fruit(); //함수 선언

int main()
{
	fruit(); //함수 호출

	return 0;
}

void fruit() //함수 정의
{ 
	printf("apple\n");

	fruit(); //자기 자신을 호출 => 재귀호출 함수
}