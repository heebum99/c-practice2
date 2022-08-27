#include "khb.h"

int main() 
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20); //논리곱&&, 둘 다 참이면 참.
	printf("(a > 10) && (a < 20) : %d\n", res);

	res = (a < 10) || (a > 20); //논리합||, 둘 중 하나라도 참이면 참.
	printf("(a < 10) || (a > 20) : %d\n", res);

	res = !(a >= 30); //논리부정!, 참은 거짓으로 거짓은 참으로
	printf("!(a >= 10) : %d\n", res);


	return 0;
}