#include "khb.h"

int main() 
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln); //long형 변수는 %ld 변환문자 사용.
	printf("long long형 변수 출력 : %lld\n", lln); //long long형은 %lld 변환문자 사용.

	return 0;
}