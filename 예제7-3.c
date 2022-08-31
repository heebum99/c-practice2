#include "khb.h"

void print_char(char ch, int count); //함수 선언

int main()
{
	print_char('@', 5); //함수 호출

	return 0;
}

void print_char(char ch, int count) { //함수 정의
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}

	return; //반환 값이 없는 함수이므로 return 생략가능.
}