#include "khb.h"

//1부터 n까지의 합을 재귀호출 함수를 이용해 작성.

int rec_func(int n); //재귀호출 함수

int main()
{
	int sum, n=10;
	sum = rec_func(n); //1부터 10까지의 합을 재귀호출 함수로 계산.
	
	printf("1부터 %d까지의 합은 %d입니다.", n, sum);

	return 0;
}

int rec_func(int n) 
{
	

	if (n == 1) {
		return 1;
	}

	else {
		return n + rec_func(n - 1); //10+rec(9) => 10+9+.....+2+rec(1) => 10+9+8....+2+1
	}
}