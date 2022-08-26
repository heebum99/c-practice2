#include "khb.h"

int main()
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a); //%d를 사용했으므로 부호를 고려해 맨 앞 비트를 부호로 생각해 -1이 출력됨.
	a = -1;
	printf("%u\n", a); //%u를 사용했으므로 부호를 고려하지 않기 때문에 4294967295가 출력됨.

	return 0;
}