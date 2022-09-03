#include "khb.h"

int main()
{
	//포인터에 const 사용 => 포인터에 저장되는 주소는 바꿀 수 있으나 간접참조연산자를 통해 변수의 값을 바꿀 수는 없다.
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	//*pa = 20; 하면 에러 발생.
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}