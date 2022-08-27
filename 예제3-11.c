#include "khb.h"

int main() 
{
	char grade; //문자
	char name[20]; //문자열

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}