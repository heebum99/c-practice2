#include "khb.h"

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count) //재귀호출함수
{
	printf("apple\n");
	if (count == 3) { //count가 3이되면 return을 통해 반환 후 종료.
		return;
	}
	fruit(count + 1); //자기 자신을 호출
}