#include "khb.h"

int main()
{
	//strcpy() 함수
	//배열은 선언시 초기화는 가능하나 선언 후 문자열을 저장하는 것은 불가능 => strcpy() 함수를 이용
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); //str1배열에 "tiger"복사
	strcpy(str2, str1); //str2배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}