#include "khb.h"

int main() 
{
	//소수 출력 프로그램
	//5개 출력시 마다 줄바꿈
	int num;
	int cnt = 0; //줄바꿈을 위한 카운트
	int pn; //소수인지 아닌지에 대한 여부, 1이면 소수 0이면 소수가 아닌 수.

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	
	for (int i = 2; i <= num; i++){

		pn = 1; //소수라고 가정.

		for (int j = 2; j < i; j++) {

			if (i % j == 0) { //나누어 떨어지면 소수가 아니므로 반복문 탈출.
				pn = 0;
				break;
			}

		}

		if (pn == 1) {
			printf("%d\t", i);
			cnt++;
			if (cnt % 5 == 0) {
				printf("\n");
			}
		}
	}

	return 0;
}