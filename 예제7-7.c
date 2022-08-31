#include "khb.h"

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count) //재귀호출 함수, 반환시 재귀호출 함수는 최초로 호출했던 곳이 아닌 이전에 호출한 곳으로 돌아감.
{
	printf("apple\n");
	if (count == 3) {
		return;
	}
	fruit(count + 1); 
	printf("jam\n");
}