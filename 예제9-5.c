#include "khb.h"

int main()
{
	//모든 주소의 크기와 포인터의 크기는 일정
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	//주소의 크기는 4바이트로 모두 일정
	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	//포인터의 크기는 4바이트로 모두 일정
	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	//변수의 크기는 자료형에 따라 달라짐 => char = 1byte, int = 4byte, double = 8byte
	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
	return 0;
}