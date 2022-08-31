#include "khb.h"

int main()
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) { //반복문 10번 반복
		sum += i;
		if (sum > 30) { //sum이 30초과라면 반복문 종료.
			break;
		}
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}