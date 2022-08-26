#include "khb.h"

int main()
{
	//char배열 초기화 이후 문자열을 저장하려면 strcpy()함수 사용.
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); //strcpy(주소,"문자열");
	printf("%s\n", fruit);

	return 0;
}