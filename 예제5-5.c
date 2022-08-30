#include "khb.h"

int main() 
{
	int a = 10, b = 20;

	if (a < 0) { //안에 있는 if문은 한문장이므로 중괄호를 생략할 수 있지만 생략하면 컴파일러가 if-else와 중첩if가 아닌 if와 중첩 if-else문으로 처리하기 때문에 의도와 달라질 수 있다.
		if (b > 0) {
			printf("ok");
		}
	}
	else {
		printf("ok");
	}

	return 0;
}