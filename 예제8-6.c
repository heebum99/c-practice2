#include "khb.h"

int main()
{
	//puts(), gets() 함수
	//puts() => 공백을 포함한 문자열 입력 함수
	//gets() => 문자열 출력 함수
	char str[80];
	
	printf("문자열 입력 : ");
	gets(str); //빈칸을 포함한 문자열 한 줄 입력 
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}