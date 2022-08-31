#include "khb.h"

int main() 
{
	//별로 x모양 만들기.
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || i + j == 4) {
				printf("*");
				continue; //continue 대신 else문으로 대체 가능.
			}
			//else{	printf(" ");}
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}