#include "khb.h"

int main()
{
	int ary[5]; //int형 요소 5개를 ary라는 이름의 배열로 선언

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); //ary[4]에는 아무 값도 저장하지 않음 => 쓰레기 값 출력

	return 0;
}