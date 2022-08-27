#include "khb.h"

int main() 
{
	//TRUE:1, FALSE:0
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);

	res = (a >= b);
	printf("a >= b : %d\n", res);

	res = (a < b);
	printf("a < b : %d\n", res);

	res = (a <= b);
	printf("a <= b : %d\n", res);

	res = (a <= c);
	printf("a <= c : %d\n", res);

	res = (a == b);
	printf("a == b : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n", res);
		
	return 0;
}