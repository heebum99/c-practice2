#include "khb.h"

int main()
{
	char str[80] = "applejam"; //문자열 초기화

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str); //scanf에서 배열에 입력받을 시 &필요 x
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}